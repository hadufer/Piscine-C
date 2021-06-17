/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:03:39 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/17 11:27:41 by hadufer          ###   ########.fr       */
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		counter;
	int		tmp[4];

	tmp[0] = 0;
	tmp[1] = 0;
	tmp[2] = 0;
	tmp[3] = 0;
	counter = count_all(size, strs) + (size * ft_strlen(sep));
	str = malloc(sizeof(char) * counter);
	while (tmp[0] < size)
	{
		tmp[1] = 0;
		while (strs[tmp[0]][tmp[1]])
			str[tmp[2]++] = strs[tmp[0]][tmp[1]++];
		if (tmp[2] == (counter - ft_strlen(sep)))
			break ;
		while (sep[tmp[3]])
			str[tmp[2]++] = sep[tmp[3]++];
		tmp[3] = 0;
		tmp[0]++;
	}
	str[tmp[2]] = 0;
	return (str);
}
