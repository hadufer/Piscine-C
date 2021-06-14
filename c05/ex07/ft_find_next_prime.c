/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 10:24:31 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/14 15:35:38 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_next_prime_util(int nb)
{
	int	curr;

	curr = 2;
	while (curr <= nb)
	{
		if (nb <= 1)
			return (-1);
		if (curr == nb)
			return (curr);
		if (((nb % 2 == 0) && (nb != 2))
			|| ((nb % 3 == 0) && (nb != 3))
			|| ((nb % curr) == 0))
			return (-1);
		curr++;
	}
	return (-1);
}

int	ft_find_next_prime(int nb)
{
	long	tmp;

	tmp = nb;
	while (ft_next_prime_util(tmp) == -1)
		tmp++;
	return (tmp);
}
