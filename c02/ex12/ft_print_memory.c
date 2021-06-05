/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:06:52 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/05 17:54:50 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

unsigned char	read_byte(void *addr, int n)
{
	unsigned char byte;

	byte = 0;
	byte = (unsigned char)(addr + n);
	return (byte);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
//	unsigned char	byte;

//	byte = (unsigned char)(addr + n);
//	while ()
	ft_putstr(read_byte);
}
