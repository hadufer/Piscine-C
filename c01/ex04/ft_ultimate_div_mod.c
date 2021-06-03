/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 12:47:14 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/03 13:21:32 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_a;
	int	tmp_b;

	if (a == 0 || b == 0)
		return ;
	tmp_a = *a;
	tmp_b = *b;
	if (*b == 0)
		return ;
	*a = tmp_a / tmp_b;
	*b = tmp_a % tmp_b;
}
