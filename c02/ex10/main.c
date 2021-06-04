#include <string.h>
#include <stdio.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char a[] = "abc";
	char b[] = "123456";
	char d[] = "abc";
	char e[] = "123456";
	unsigned int size = 6;

	printf("ft_strlcpy = = %u \n", ft_strlcpy(a, NULL, size));
	printf("strlcpy =  = %u \n",  strlcpy(a, NULL, size));
}
