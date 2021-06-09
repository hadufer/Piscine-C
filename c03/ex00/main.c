#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	ft_strcmp(char *s1, char *s2);

int	main()
{
	char test1[] = "aa";
	char test2[] = "";

	char *test3 = strdup(test1);
	char *test4 = strdup(test2);
	printf("strcmp = %s test2 = %s result = %d\n", test1, test2, strcmp(test1, test2));
	printf("ft_strcmp = %s test4 = %s result = %d\n", test3, test4, ft_strcmp(test3, test4));
}
