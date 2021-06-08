/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 12:26:34 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/08 13:18:44 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	long	length;

	length = 0;
	while (str[length])
		length++;
	write(1, str, length);
}

void	ft_putchar_hex(char c)
{
	if (!c)
		return ;
	ft_putchar_hex(c / 16);
	if ((c % 16) < 10)
		ft_putchar('0' + (c % 16));
	else
		ft_putchar('a' + ((c % 16) - 10));
}

void	ft_putstr_non_printable(char *str)
{
	long	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 1 && str[i] <= 31)
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			ft_putchar_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
