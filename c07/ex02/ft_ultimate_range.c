/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 09:01:53 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/15 15:33:38 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

long	ft_rangelen(int min, int max)
{
	long	i;
	long	l_min;
	long	l_max;

	i = 0;
	l_min = min;
	l_max = max;
	while (l_min < l_max)
	{
		i++;
		l_min++;
	}
	return (i);
}

int	*ft_range(int min, int max)
{
	int		*ret;
	long	length;
	long	i;
	long	l_min;

	i = 0;
	l_min = min;
	if (min >= max)
		return (NULL);
	length = ft_rangelen(min, max);
	ret = malloc(length * sizeof(int));
	if (ret == NULL)
		return (NULL);
	while (i <= length)
	{
		ret[i] = l_min;
		i++;
		l_min++;
	}
	return (ret);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	long	length;

	length = ft_rangelen(min, max);
	if (length > INT_MAX)
		return (-1);
	*range = ft_range(min, max);
	if (range == NULL)
		return (0);
	else
		return (length);
}
