/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:03:39 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/15 17:03:44 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_all(int size, char **strs)
{
	int		i;
	int		j;
	long	ret;

	ret = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			ret++;
		}
		i++;
	}
	return (ret);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		counter;
	int		tmp[3];

	tmp[0] = 0;
	tmp[1] = 0;
	tmp[2] = 0;
	counter = count_all(size, strs) + size;
	str = malloc(sizeof(char) * counter);
	while (tmp[0] < size)
	{
		tmp[1] = 0;
		while (strs[tmp[0]][tmp[1]])
			str[tmp[2]++] = strs[tmp[0]][tmp[1]++];
		if (tmp[2] == (counter - 1))
			break ;
		str[tmp[2]] = *sep;
		tmp[2]++;
		tmp[0]++;
	}
	str[tmp[2]] = 0;
	return (str);
}
