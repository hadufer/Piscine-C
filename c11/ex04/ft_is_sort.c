/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 11:40:38 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/24 16:54:03 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_comp(int a, int b)
{
	return (a - b);
}

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while ((i + 1 < length) && (i < length))
	{
		if (f(tab[i], tab[i + 1]) == 0)
			i++;
		else if (tmp == 0 && f(tab[i], tab[i + 1]) < 0)
		{
			tmp = -1;
			i++;
		}
		else if (tmp == 0 && f(tab[i], tab[i + 1]) > 0)
		{
			tmp = 1;
			i++;
		}
		if ((i + 1 < length) && ((f(tab[i], tab[i + 1]) < 0 && tmp > 0)
				|| (f(tab[i], tab[i + 1]) > 0 && tmp < 0)))
			return (0);
		i++;
	}
	return (1);
}
