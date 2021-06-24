/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:01:36 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/24 15:02:55 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "utils_bis.h"
#include "do_op.h"

int	check_operator(char *op_str)
{
	if (ft_strcmp(op_str, "+") == 0)
		return (0);
	else if (ft_strcmp(op_str, "-") == 0)
		return (1);
	else if (ft_strcmp(op_str, "/") == 0)
		return (2);
	else if (ft_strcmp(op_str, "*") == 0)
		return (3);
	else if (ft_strcmp(op_str, "%") == 0)
		return (4);
	return (-1);
}

int	main_util(int ac, char **av, int *op)
{
	if (ac != 4)
	{
		ft_putstr("\n", 1);
		return (0);
	}
	*op = check_operator(av[2]);
	if (*op == -1)
	{
		ft_putstr("0\n", 1);
		return (0);
	}
	return (1);
}

int	main_util_bis(int *op, long *b)
{
	if (*op == 2 && *b == 0)
	{
		ft_putstr("Stop : division by zero\n", 1);
		return (0);
	}
	if (*op == 4 && *b == 0)
	{
		ft_putstr("Stop : modulo by zero\n", 1);
		return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	long	(*ptr_tab[5])(long, long);
	int		op;
	long	a;
	long	b;

	ptr_tab[0] = add;
	ptr_tab[1] = sub;
	ptr_tab[2] = div;
	ptr_tab[3] = mul;
	ptr_tab[4] = mod;
	if (!main_util(ac, av, &op))
		return (0);
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	if (!main_util_bis(&op, &b))
		return (0);
	ft_putnbr((ptr_tab[op](a, b)));
	ft_putchar('\n');
}
