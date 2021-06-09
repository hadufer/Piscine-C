/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 14:26:01 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/09 18:26:40 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_rec(int nb)
{
	if (!nb)
		return ;
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		ft_putnbr_rec(nb / 10);
	}
	else
	{
		ft_putnbr_rec(nb / 10);
		ft_putchar('0' + (nb % 10));
	}
	return ;
}

void	ft_putnbr(int nb)
{
	if (nb == INT_MAX)
		write(1, "2147483647", 10);
	else if (nb == INT_MIN)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		ft_putchar('0');
	else
		ft_putnbr_rec(nb);
}
