/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 09:51:00 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/18 12:45:40 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(int ac, char **av)
{
	t_stock_str *test = ft_strs_to_tab(ac -1, NULL);
	int	i;

	i = 0;
	while (i < ac)
	{
		printf("test[%d] size = %d str = %s copy = %s\n", i, test[i].size, test[i].str, test[i].copy);
		i++;
	}
}
