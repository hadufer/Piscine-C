#include "ft_str_is_printable.c"

int	main(void)
{
	int i[] = {32};

	while (i[0] <= 127)
	{
		printf("%d\n", ft_str_is_printable((char *)i));
		i[0]++;
	}
	printf("%c\n", 127);
}
