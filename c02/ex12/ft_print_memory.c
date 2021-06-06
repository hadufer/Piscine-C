#include <unistd.h>

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

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*beg;
	unsigned char	*byte;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	byte = (unsigned char*)(addr);
	if (size <= 0)
		return (addr);
	while (i < size)
	{
		write_byte_address_format((size_t)byte, 0);
		ft_putchar(':');
		ft_putchar(' ');
		j = 1;
		while ((i < size) && j <= 16)
		{
			if (j == 1)
				beg = (addr + i);
			if (*byte)
				write_byte_hex(*byte);
			else
			{
				ft_putchar('0');
				ft_putchar('0');
			}
			*byte++;
			if ((j % 2) == 0)
				ft_putchar(' ');
			j++;
			i++;
		}
		if (j % 2 == 0)
			ft_putchar(' ');
		while (beg < byte)
		{
			if (*beg >= 0 && *beg <= 31)
				ft_putchar('.');
			if (*beg >= 32 && *beg <= 127)
				ft_putchar(*beg);
			beg++;
		}
		ft_putchar('\n');
	}
}
