/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 12:52:53 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/03 15:27:07 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	length;

	if (str == 0)
		return ;
	length = 0;
	while (str[length])
		length++;
	write(1, str, length);
}
