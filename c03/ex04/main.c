#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main()
{
	char test1[] = "ababcabc";
	char test2[] = "ab";

	char *test3 = strdup(test1);
	char *test4 = strdup(test2);

	printf("strstr || test1 = %s test2 = %s result = %s\n", test1, test2, strstr(test1, test2));
	printf("ft_strstr || test1 = %s test2 = %s result = %s\n", test3, test4, ft_strstr(test3, test4));
}
