/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 11:54:29 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/11 12:15:03 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	**ft_ten_queens_puzzle(int tab[][10]);
#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int tab[10][10];
	ft_ten_queens_puzzle(tab);
	while (i <= 9)
	{
		while (j <= 9)
		{
			printf("%d ", tab[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
