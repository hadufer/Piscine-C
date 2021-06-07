#include <stdio.h>

void	ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char *test;
	asprintf(&test,"ab%cdefghijk mnopqrstuvwxyz", 30);
	ft_print_memory(test, 26);
}
