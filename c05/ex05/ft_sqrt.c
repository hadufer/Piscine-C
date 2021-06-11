/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 09:41:33 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/11 09:53:33 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_rec(int curr, int nb)
{
	if (curr == nb)
		return (0);
	if ((curr * curr) == nb)
		return (curr);
	return (ft_sqrt_rec(curr + 1, nb));
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	return (ft_sqrt_rec(0, nb));
}
