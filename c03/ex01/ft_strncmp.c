/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:37:41 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/08 14:41:36 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	char			*tmp[2];

	i = 0;
	tmp[0] = s1;
	tmp[1] = s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		while (*tmp[0])
		{
			if (*tmp[1] == 0)
				return (1);
			if (*tmp[1] > *tmp[0])
				return (-1);
			if (*tmp[0] > *tmp[1])
				return (1);
			tmp[0]++;
			tmp[1]++;
		}
	}
	if (*tmp[1] != 0)
		return (-1);
	return (0);
}
