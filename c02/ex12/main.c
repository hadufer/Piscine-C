#include <stdio.h>

void	ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char *test;
	asprintf(&test,"abcdefghijklmnopqrstuvwxyz");
	ft_print_memory(test, 26);
}
