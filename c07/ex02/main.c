/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 09:15:08 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/15 15:35:53 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main()
{
	int *tab;
	int min = -1;
	int max = 20;
	printf("%d\n", ft_ultimate_range(&tab, min, max));
}
