#include <string.h>
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char a[] = "abcdefghi";
	char b[] = "123456";
	char *d = strdup(a);
	char *e = strdup(b);
	unsigned int size = 5;

	printf("strlcpy = = %u \n",  strlcpy(d, NULL, size));
	printf("ft_strlcpy = = %u \n", ft_strlcpy(a, NULL, size));
}
