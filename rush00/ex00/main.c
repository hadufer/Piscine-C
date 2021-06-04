#include <limits.h>
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_pow(int i, int pow)
{
	while (pow--)
		i *= i;
	return i;
}

int	ft_atoi(char *str)
{
	long int i;
	long int tmp;
	long int neg;

	neg = 1;
	tmp  = 0;
	i = 0;
	if (str == "2147483647")
		return (2147483647);
	if (str[0] == '-')
	{
		i++;
		neg = -1;
	}
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || 
			str[i] == '\r'|| str[i] == '\v' || str[i] == '\b' ||
			str[i] == '\f')
			i++;
		else if (str[i] >= '0' && str[i] <= '9')
			tmp = (str[i] - 48) + (tmp * 10);
		else
			return 0;
		i++;
	}
	return ((int)tmp * neg);
}

void	rush(int i, int j)
{
	long int tmp_i;
	long int tmp_j;

	tmp_j = 0;
	tmp_i = 0;
	if (i <= 0 || j <= 0)
		return ;
	while (tmp_j < j)
	{
		tmp_i = 0;
		while (tmp_i < i)
		{
			if (tmp_j == 0 && (tmp_i == 0 || tmp_i == (i - 1)))
				ft_putchar('A');
			else if (tmp_j == (j - 1) && (tmp_i == 0 || tmp_i == (i - 1)))
				ft_putchar('C');
			else
				ft_putchar('B');
			tmp_i++;
		}
		ft_putchar('\n');
		tmp_j++;
	}
}

int	main(int argc, char **argv)
{
	int rush_choice;

	rush_choice = ft_atoi(argv[3]);
	if (rush_choice > )
	if (argc != 4)
		return (-1);
	rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}