/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 09:51:00 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/21 15:04:21 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(int ac, char **av)
{
	t_stock_str *test = ft_strs_to_tab(ac, av);
	int	i;

	i = 0;
	while (i < ac)
	{
		printf("test[%d] size = %d str = %s copy = %s\n", i, test[i].size, test[i].str, test[i].copy);
		i++;
	}
}
