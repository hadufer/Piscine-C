int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	char test1[] = "bbb";
	char test2[] = "abc";

	char *test3 = strdup(test1);
	char *test4 = strdup(test2);
	printf("strncmp = %s test2 = %s result = %d\n", test1, test2, strncmp(test1, test2, 0));
	printf("ft_strncmp = %s test4 = %s result = %d\n", test3, test4, ft_strncmp(test3, test4, 0));
}
