/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bis.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:27:56 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/24 14:54:08 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

void	ft_putnbr_rec(int nb)
{
	if (!nb)
		return ;
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		ft_putnbr_rec(nb);
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

int	mini_strncmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] && s2[i]))
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if (s1[i] == 0 && s2[i] == 0)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	unsigned int	i;
	int				tmp[2];

	i = 0;
	tmp[0] = 1;
	tmp[1] = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			tmp[0] *= -1;
		i++;
	}
	if (mini_strncmp(str + i, "2147483647"))
		return (INT_MAX * tmp[0]);
	else if (mini_strncmp(str + i, "-2147483648"))
		return (INT_MIN * tmp[0]);
	while (str[i] >= '0' && str[i] <= '9')
	{
		tmp[1] = (str[i] - 48) + (10 * tmp[1]);
		i++;
	}
	return (tmp[1] * tmp[0]);
}
