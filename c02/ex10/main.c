#include <string.h>
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char a[] = "jhonwick";
	char b[] = "babayaga";
	char *d = strdup(a);
	char *e = strdup(b);
	unsigned int size = 2;

	printf("ft_strlcpy BEFORE %s %s \n", a, b);
	printf("ft_strlcpy == %u \n", ft_strlcpy(a, b, size));
	printf("ft_strlcpy AFTER %s %s \n", a, b);
	printf("strlcpy BEFORE %s %s \n", d, e);
	printf("strlcpy == %lu \n",  strlcpy(d, e, size));
	printf("strlcpy AFTER %s %s \n", d, e);
}
