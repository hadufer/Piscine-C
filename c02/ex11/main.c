#include <limits.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char *test;
	asprintf(&test, "%c%c%s%c", '\n', (char)24,"MeepMoop", (char)7);
	ft_putstr_non_printable(test);
}
