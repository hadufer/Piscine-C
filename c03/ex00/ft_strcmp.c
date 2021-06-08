/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:35:12 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/08 14:37:12 by hadufer          ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	char	*tmp_1;
	char	*tmp_2;

	tmp_1 = s1;
	tmp_2 = s2;
	while (*tmp_1)
	{
		if (*tmp_2 == 0)
			return (1);
		if (*tmp_2 > *tmp_1)
			return (-1);
		if (*tmp_2 < *tmp_1)
			return (1);
		tmp_1++;
		tmp_2++;
	}
	if (*tmp_2 != 0)
		return (-1);
	return (0);
}
