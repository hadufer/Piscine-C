#include <stdio.h>
#include <limits.h>
#include <unistd.h>

int		ft_atoi(char *str);

int main()
{
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", ft_atoi("0"));
	printf("%d\n", ft_atoi("1"));
	printf("%d\n", ft_atoi("42"));
	printf("%d\n", ft_atoi("-10"));
}
