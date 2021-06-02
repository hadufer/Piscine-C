/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 17:58:07 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/02 17:58:09 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_putstr(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	write(1, str, length);
	return ;
}

void	ft_putnbr(int i, int j)
{
	if (j == 0 && i < 10 && i != 0)
		ft_putstr("0");
	if (!i)
	{
		if (j == 0)
			ft_putstr("00");
		return ;
	}
	ft_putnbr(i / 10, j + 1);
	ft_putchar('0' + (i % 10));
	return ;
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = a + 1;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_putnbr(a, 0);
			ft_putstr(" ");
			ft_putnbr(b, 0);
			if (a == 98 && b == 99)
				return ;
			ft_putstr(", ");
			b++;
		}
		a++;
	}
}
