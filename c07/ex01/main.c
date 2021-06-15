/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 08:42:30 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/15 09:06:40 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);
long	ft_rangelen(int min, int max);
int	main()
{
	long	i;
	long	length;
	int		*tab;
	int		a;
	int		b;

	i = 0;
	a = -2121212;
	b = 32131312;
	length = ft_rangelen(a, b);
	tab = ft_range(a, b);
	while (i < length)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
