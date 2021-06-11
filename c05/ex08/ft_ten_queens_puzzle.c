/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 10:50:24 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/11 12:23:36 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_col(int col, int line, int tab[][10])
{
	int	i;

	i = col;
	while (i <= 9)
	{
		if (tab[i][line] == 1)
			return (0);
		i++;
	}
	i = col;
	while (i >= 0)
	{
		if (tab[i][line] == 1)
			return (0);
		i--;
	}
	return (1);
}

int	check_line(int col, int line, int tab[][10])
{
	int	i;

	i = line;
	while (i <= 9)
	{
		if (tab[col][i] == 1)
			return (0);
		i++;
	}
	i = line;
	while (i >= 0)
	{
		if (tab[col][i] == 1)
			return (0);
		i--;
	}
	return (1);
}

int	ft_queen_rec(int col, int line, int tab[][10])
{
	while (col <= 9)
	{
		line = 0;
		while (line <= 9)
		{
			if (check_line(col, line, tab) && check_col(col, line, tab))
				tab[col][line] = 1;
				ft_queen_rec(col, line + 1, tab);
			line++;
		}
		col++;
	}
	return (1);
}

// NE RENVOIS PAS LE BON TRUC IL FAUT RENVOYER UN INT ET MAUVAIS PARAMS
int	ft_ten_queens_puzzle(int tab[][10])
{
	ft_queen_rec(0, 0, tab);
	return (1);
}
