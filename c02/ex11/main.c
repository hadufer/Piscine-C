#include <limits.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char *test;
	asprintf(&test, "%c", (char)16);
	ft_putstr_non_printable(test);
}
