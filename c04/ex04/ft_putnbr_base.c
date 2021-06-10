/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 08:58:27 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/10 09:59:35 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <limits.h>
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	find_c(char *str, char c)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	parse_base(char *base)
{
	unsigned int	i;

	i = 0;
	if (find_c(base, '+') || find_c(base, '-'))
		return (1);
	while (base[i])
	{
		if (find_c(base + i + 1, base[i]))
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base_rec(int nbr, char *base)
{
	if (!nbr)
		return ;
	ft_putnbr_base_rec(nbr / ft_strlen(base), base);
	write(1, &base[nbr % ft_strlen(base)], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (!base || !*base || ft_strlen(base) == 1 || parse_base(base))
		return ;
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	else if (nbr < 0)
		write(1, "-", 1);
	ft_putnbr_base_rec(nbr, base);
}
