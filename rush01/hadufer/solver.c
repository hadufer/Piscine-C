/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 12:00:35 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/12 12:18:49 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

int	solver(int i, int j, int tab[][4], int v_tab[][4])
{
	if (i == TAB_SIZE)
		return (1);
	if (j >= TAB_SIZE)
		if (solver(i + 1, 0, tab, v_tab) == 1)
			return (1);
	while (j < 4)
	{
		if (check_row_right(i, j, tab, v_tab))
		{
			printf("[%d][%d] is ok\n", i, j);
		}
		j++;
	}
	return (1);
}
