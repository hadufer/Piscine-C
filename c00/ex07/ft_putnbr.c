/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 17:57:39 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/02 17:57:51 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

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

void	ft_putnbr_util(int nb, int neg)
{
	if (!nb)
	{
		if (neg)
			ft_putchar('-');
		return ;
	}
	ft_putnbr_util(nb / 10, neg);
	ft_putchar('0' + (nb % 10));
}

void	ft_putnbr(int nb)
{
	int	neg;

	neg = 0;
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	else if (nb < 0)
	{
		neg = 1;
		nb *= -1;
		ft_putnbr_util(nb, neg);
	}
	else if (nb == 0)
		ft_putchar('0');
	else
		ft_putnbr_util(nb, neg);
}

int	main(void)
{
	ft_putnbr(INT_MIN);
	ft_putchar('\n');
	ft_putnbr(INT_MAX);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-1245);
	ft_putchar('\n');
	ft_putnbr(1);
	ft_putchar('\n');
	ft_putnbr(-1);
	ft_putchar('\n');
}
