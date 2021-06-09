#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int n);

int main()
{
	char test1[10] = "abcdef";
	char test2[] = "0";
	unsigned int size = sizeof(test1);

	char *test3 = strdup(test1);
	char *test4 = strdup(test2);

	printf("ft_strlcat || test3 = %s test4 = %s\n", test3, test4);
	printf("ft_strlcat result = %u\n", ft_strlcat(test3, test4, size));
	printf("ft_strlcat || test1 = %s test2 = %s\n", test3, test4);
	printf("strlcat || test1 = %s test2 = %s\n", test1, test2);
	printf("strlcat result = %lu\n", strlcat(test1, test2, size));
	printf("strlcat || test1 = %s test2 = %s\n", test1, test2);
}
