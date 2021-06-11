/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 10:24:31 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/11 10:45:20 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_next_prime_rec(int curr, int nb)
{
	if (curr == nb)
		return (curr);
	if (((nb % curr) == 0) && (curr != 1))
		return (-1);
	return (ft_next_prime_rec(curr + 1, nb));
}

int	ft_find_next_prime(int nb)
{
	int	tmp;

	tmp = nb;
	if (nb <= 1)
		return (0);
	while (ft_next_prime_rec(1, tmp) == -1)
		tmp++;
	return (ft_next_prime_rec(1, tmp));
}
