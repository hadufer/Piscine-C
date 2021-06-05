#include <limits.h>

int		ft_atoi(char *str);
void	rush(int i, int j);

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (-1);
	rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
