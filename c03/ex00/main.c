int	ft_strcmp(char *s1, char *s2);

int	main()
{
	char test1[] = "a";
	char test2[] = "aa";

	char *test3 = strdup(test1);
	char *test4 = strdup(test2);
	printf("test1 = %s test2 = %s result = %d\n", test1, test2, strcmp(test1, test2));
	printf("test3 = %s test4 = %s result = %d\n", test3, test4, ft_strcmp(test3, test4));
}
