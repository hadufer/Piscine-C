void	ft_putchar(char c);

int	mini_strncmp(char *str, char *to_cmp, long n)
{
	long	i;

	i = 0;
	while (i < n)
	{
		if (str[i] != to_cmp[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi_is_neg_or_max(char *str, long *i, long *neg)
{
	if (mini_strncmp(str, "2147483647", 10) == 1)
		return (1);
	if (str[0] == '-')
	{
		*i = 1;
		*neg = -1;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	long int	i;
	long int	tmp;
	long int	neg;

	neg = 1;
	tmp = 0;
	i = 0;
	if (ft_atoi_is_neg_or_max(str, &i, &neg) == 1)
		return (2147483647);
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\b'
			|| str[i] == '\f')
			i++;
		else if (str[i] >= '0' && str[i] <= '9')
			tmp = (str[i] - 48) + (tmp * 10);
		else
			return (0);
		i++;
	}
	return ((int)tmp * neg);
}

void	rush(int i, int j)
{
	long int	tmp[2];

	tmp[1] = 0;
	tmp[0] = 0;
	if (i <= 0 || j <= 0)
		return ;
	while (tmp[1] < j)
	{
		tmp[0] = 0;
		while (tmp[0] < i)
		{
			if (tmp[0] == 0 && (tmp[1] == 0 || tmp[1] == (j - 1)))
				ft_putchar('A');
			else if (tmp[0] == (i - 1) && (tmp[1] == 0 || tmp[1] == (j - 1)))
				ft_putchar('C');
			else if ((tmp[0] == 0 || tmp[1] == 0)
				|| (tmp[0] == i - 1 || tmp[1] == j - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			tmp[0]++;
		}
		ft_putchar('\n');
		tmp[1]++;
	}
}
