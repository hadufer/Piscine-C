#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char	*ft_strncpy(char *str, char *str2, int a);

int main(int argc, char **argv)
{
	char *a = strdup(argv[1]);
	char *b = strdup(argv[2]);
	unsigned int size = atoi(argv[3]);

	char *c = strdup(a);
	char *d = strdup(b);

	printf("ft_strncpy || %s, %s\n",a ,b);
	ft_strncpy(a, b, size);
	printf("ft_strncpy || %s, %s\n", a, b);
	printf("strncpy || %s, %s\n", c, d);
	strncpy(c, d, size);
	printf("strncpy || %s, %s\n", c, d);
}
