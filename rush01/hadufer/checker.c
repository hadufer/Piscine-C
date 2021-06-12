/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 12:15:13 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/12 12:18:29 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

// A finir
int	check_row_right(int i, int j, int tab[][4], int v_tab[][4])
{
	int	num;
	int	comp;
	int	tmp;

	num = v_tab[3][j]; // num to match
	comp = TAB_SIZE - 1;
	tmp = 1;
	while (comp >= 0)
	{
		if (tab[i][comp - 1] && (tab[i][comp] > tab[i][comp - 1]))
			break ;
		tmp++;
		comp--;
	}
	if (tmp == num)
		return (1);
	else
		return (0);
}
