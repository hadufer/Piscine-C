/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 09:41:33 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/14 15:29:19 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	curr;

	curr = 0;
	if (nb < 0)
		return (0);
	while ((curr * curr) <= nb)
	{
		if ((curr * curr) == nb)
			return (curr);
		curr++;
	}
	return (0);
}
