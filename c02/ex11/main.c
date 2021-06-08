#include <limits.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char *test;
	asprintf(&test, "%c%c%s%c", '\n', (char)16,"MeepMoop", (char)7);
	ft_putstr_non_printable(test);
}
