/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:10:06 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/03 11:20:07 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int i)
{
	char c;

	c = '0';
	if (i < 10 && i > -1)
	{
		c += i;
		write(1, &c, 1);
	}
}

void	print_tab(int *tab, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putnbr(tab[i]);
		i++;
	}
	write(1, ", " , 2);
}

int	ft_print_combn_util(int *tab, int n, int i)
{
	if (i >= n)
		return -1;
	while (tab[i] <= 9)
	{
			if (ft_print_combn_util(tab, n, i+1) >= 9)
		{
			tab[i]++;
			tab[i+1] = tab[i] + 1;
		}
		else
		{
			print_tab(tab, n);
			tab[i]++;
		}
	}
	return tab[i];
}

void	ft_print_combn(int n)
{
	int tab[10];
	int i;

	i = 0;
	if (n > 9 || n < 1)
		return ;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	ft_print_combn_util(tab, n, 0);
}

int	main(void)
{
	ft_print_combn(2);
}
