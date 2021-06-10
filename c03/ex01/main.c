#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	char *test1;
	char *test2;
	unsigned int size = 3;

	asprintf(&test1, "%c", '\200');
	asprintf(&test2, "%c", '\0');
	char *test3 = strdup(test1);
	char *test4 = strdup(test2);
	printf("strncmp = %s test2 = %s result = %d\n", test1, test2, strncmp(test1, test2, size));
	printf("ft_strncmp = %s test4 = %s result = %d\n", test3, test4, ft_strncmp(test3, test4, size));
}
