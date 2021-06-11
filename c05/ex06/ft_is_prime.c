/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 09:54:29 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/11 10:16:44 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime_rec(int curr, int nb)
{
	if (curr == nb)
		return (1);
	if (((nb % curr) == 0) && (curr != 1))
		return (0);
	return (ft_is_prime_rec(curr + 1, nb));
}

int	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	return (ft_is_prime_rec(1, nb));
}
