#include <stdio.h>

void	ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char *test;
	asprintf(&test,"ab%cdefghijk mnopqrstuvwxyz", 29);
	//printf("%s\n", test);
	ft_print_memory(test, 34);
}
