/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:35:12 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/09 17:20:50 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	char			*tmp_1;
	char			*tmp_2;
	unsigned int	i;

	tmp_1 = s1;
	tmp_2 = s2;
	i = 0;
	if (!s1 || !s2 || !n)
		return (n);
	while ((*tmp_1 && *tmp_2) && (i < n))
	{
		if (*tmp_2 == 0 && *tmp_1 == 0)
			return (*tmp_1 - *tmp_2);
		if (*tmp_2 > *tmp_1)
			return (*tmp_1 - *tmp_2);
		if (*tmp_2 < *tmp_1)
			return (*tmp_1 - *tmp_2);
		tmp_1++;
		tmp_2++;
	}
	return (*tmp_1 - *tmp_2);
}
