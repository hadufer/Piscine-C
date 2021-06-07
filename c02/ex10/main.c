#include <string.h>
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char a[] = "abcdefg";
	char b[] = "12345";
	char *d = strdup(a);
	char *e = strdup(b);
	unsigned int size = 8;

	printf("ft_strlcpy == %u \n", ft_strlcpy(a, b, size));
	printf("strlcpy == %u \n",  strlcpy(d, e, size));
}
