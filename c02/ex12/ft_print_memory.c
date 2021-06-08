/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 08:45:40 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/08 14:28:18 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_byte_address_format(unsigned long addr, int depth)
{
	if (addr == 0)
	{
		while ((16 - depth) > 0)
		{
			ft_putchar('0');
			depth++;
		}
		return ;
	}
	write_byte_address_format((addr / 16), depth + 1);
	if ((addr % 16) < 10)
		ft_putchar(addr % 16 + '0');
	else
		ft_putchar(((addr % 16) - 10) + 'a');
}

void	write_byte_hex(unsigned char byte)
{
	if (byte == 0)
		return ;
	write_byte_hex(byte / 16);
	if ((byte % 16) < 10)
		ft_putchar(byte % 16 + '0');
	else
		ft_putchar(((byte % 16) - 10) + 'a');
}

void	ft_print_memory_util(unsigned char **passing, unsigned int *tab,
		void *addr, unsigned int size)
{
	while (tab[1] <= 16)
	{
		if (tab[0] < size && tab[1] == 1)
			passing[0] = (addr + tab[0]);
		if (tab[0] < size && *passing[1])
			write_byte_hex(*passing[1]++);
		else if ((tab[0] < size) && (*passing[1]++ == 0))
			write(1, "00", 2);
		else
			write(1, "  ", 2);
		if ((tab[1] % 2) == 0)
			ft_putchar(' ');
		tab[1]++;
		tab[0]++;
	}
	if (tab[1] % 2 == 0)
		ft_putchar(' ');
	while (passing[0] < passing[1])
	{
		if (*passing[0] >= 32 && *passing[0] <= 127)
			ft_putchar(*passing[0]);
		else
			ft_putchar('.');
		passing[0]++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	tab[2];
	unsigned char	*passing[2];

	tab[0] = 0;
	passing[1] = (unsigned char *)(addr);
	if (addr == NULL)
		return (NULL);
	if (size <= 0)
		return (addr);
	while (tab[0] < size)
	{
		write_byte_address_format((size_t)passing[1], 0);
		ft_putchar(':');
		ft_putchar(' ');
		tab[1] = 1;
		ft_print_memory_util(passing, tab,
			addr, size);
		ft_putchar('\n');
	}
	return (addr);
}
