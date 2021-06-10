#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
int	ft_atoi_base(char *str, char *base);

int	main()
{
	char *test = strdup("-2147483648");
	char *base = strdup("0123456789");
	printf("%d\n", ft_atoi_base(test, base));
	printf("%d\n", atoi(test));
}
