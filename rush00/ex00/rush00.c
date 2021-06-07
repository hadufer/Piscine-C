/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <hadufer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 10:54:36 by anggonza          #+#    #+#             */
/*   Updated: 2021/06/06 20:25:22 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			return ((int)tmp * neg);
		i++;
	}
	return ((int)tmp * neg);
}

void	ft_print_tabs(int i, int j, int x, int y)
{
	if ((x == 0 || x == i - 1) && (y == 0 || y == j - 1))
		ft_putchar('o');
	else if ((x != 0 && x != (x - 1)) && (y == 0 || y == (j - 1)))
		ft_putchar('-');
	else if (((x == 0) || (x == (i - 1))) && (y != 0) && (y != (j - 1)))
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int i, int j)
{
	int	x;
	int	y;

	if (i <= 0 || j <= 0)
	{
		return ;
	}
	x = 0;
	y = 0;
	while (y < j)
	{
		x = 0;
		while (x < i)
		{
			ft_print_tabs(i, j, x, y);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
