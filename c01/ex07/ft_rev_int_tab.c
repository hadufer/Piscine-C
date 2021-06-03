/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:44:38 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/03 17:09:47 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	if (tab == 0 || size <= 0)
		return ;
	while (i < (size / 2))
	{
		ft_swap(&tab[i], &tab[size - 1 - i]);
		i++;
	}
}
