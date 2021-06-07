/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarone <abarone@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 00:26:06 by abarone           #+#    #+#             */
/*   Updated: 2021/06/06 00:46:22 by abarone          ###   ########.fr       */
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

void	rush(int x, int y)
{
	int	x_tmp;
	int	y_tmp;

	y_tmp = -1;
	while (++y_tmp < y)
	{
		x_tmp = -1;
		while (++x_tmp < x)
		{
			if ((y_tmp == 0 && x_tmp == 0)
				|| (y_tmp == y - 1 && x_tmp == x - 1
					&& x_tmp != 0 && y_tmp != 0))
				ft_putchar('/');
			else if ((y_tmp == 0 && x_tmp == x - 1)
				|| (y_tmp == y - 1 && x_tmp == 0))
				ft_putchar('\\');
			else if ((y_tmp == 0 || y_tmp == y - 1)
				&& (x_tmp > 0 && x_tmp < x - 1) || (y_tmp > 0 && y_tmp < y - 1)
				&& (x_tmp == 0 || x_tmp == x - 1))
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
