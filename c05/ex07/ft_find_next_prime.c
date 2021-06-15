/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 10:24:31 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/15 11:24:16 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_next_prime_util(int nb)
{
	long	curr;
	long	tmp;

	curr = 2;
	tmp = nb;
	while ((curr * curr) <= tmp)
	{
		if (((nb % 2 == 0) && (nb != 2))
			|| ((nb % 3 == 0) && (nb != 3))
			|| ((nb % curr) == 0))
			return (0);
		curr++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!ft_next_prime_util(nb))
		nb++;
	return (nb);
}
