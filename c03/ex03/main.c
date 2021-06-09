#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *ft_strncat(char *dest, const char *src, unsigned int nb);

int main()
{
	char test1[10] = "bbb";
	char test2[] = "123";
	unsigned int size = 5;

	char *test3 = strdup(test1);
	char *test4 = strdup(test2);
	printf("strncat || test1 = %s test2 = %s size = %u result = %s\n", test1, test2, size, strncat(test1, test2, size));
	printf("ft_strncat || test4 = %s test4 = %s size = %u result = %s\n", test3, test4, size, ft_strncat(test3, test4, size));
}
