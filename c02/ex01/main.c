#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char	*ft_strncpy(char *str, char *str2, int a);

int main()
{
	char *a = strdup("abcde");
	char *b = strdup("0123");
	unsigned int size = 3;
	char *c = strdup(a);
	char *d = strdup(b);

	printf("ft_strncpy || %s, %s\n",a ,b);
	ft_strncpy(a, b, size);
	printf("ft_strncpy || %s, %s\n", a, b);
	printf("strncpy || %s, %s\n", c, d);
	strncpy(c, d, size);
	printf("strncpy || %s, %s\n", c, d);
}
