/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:41:24 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/03 17:10:34 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	reset;

	i = 0;
	reset = 0;
	if (tab == 0 || size <= 0)
		return ;
	while (i < size)
	{
		if (reset)
		{
			reset = 0;
			i = 0;
		}
		if (i + 1 < size && tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			reset = 1;
		}
		i++;
	}
}
