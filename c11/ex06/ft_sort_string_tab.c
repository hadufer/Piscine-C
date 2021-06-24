/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 15:06:54 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/24 15:14:40 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

int	ft_strcmp(char *s1, char *s2)
{
	char	*tmp_1;
	char	*tmp_2;

	tmp_1 = s1;
	tmp_2 = s2;
	while (*tmp_2 || *tmp_1)
	{
		if (*tmp_2 == 0 && *tmp_1 == 0)
			return (*tmp_1 - *tmp_2);
		if (*tmp_2 > *tmp_1)
			return (*tmp_1 - *tmp_2);
		if (*tmp_2 < *tmp_1)
			return (*tmp_1 - *tmp_2);
		tmp_1++;
		tmp_2++;
	}
	return (*tmp_1 - *tmp_2);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (tab[i])
	{
		j = i;
		while (j > 0 && ft_strcmp(tab[j - 1], tab[j]) > 0)
		{
			tmp = tab[j - 1];
			tab[j - 1] = tab[j];
			tab[j] = tmp;
			j--;
		}
		i++;
	}
}
