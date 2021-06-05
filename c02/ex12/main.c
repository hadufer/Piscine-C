void	ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char *test;
	asprintf(&test,"abc\0");
	ft_print_memory(test, 4);
}
