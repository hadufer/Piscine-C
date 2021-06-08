#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *ft_strcat(char *dest, const char *src);

int main()
{
	char test1[10] = "bbb";
	char test2[] = "123";

	char *test3 = strdup(test1);
	char *test4 = strdup(test2);
	printf("test1 = %s test2 = %s result = %s\n", test1, test2, strcat(test1, test2));
	printf("test3 = %s test4 = %s result = %s\n", test3, test4, ft_strcat(test3, test4));
}
