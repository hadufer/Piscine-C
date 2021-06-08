/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:20:55 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/08 16:39:46 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	tmp_i;
	unsigned int	j;
	unsigned int	to_find_length;

	i = 0;
	tmp_i = 0;
	to_find_length = ft_strlen(to_find);
	if (*to_find == 0)
		return (str);
	while (str[i])
	{
		j = 0;
		tmp_i = i;
		while (to_find[j] == str[tmp_i])
		{
			tmp_i++;
			j++;
		}
		if (to_find_length == j)
			return (str + i);
		i++;
	}
	return (NULL);
}
