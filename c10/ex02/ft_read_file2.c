/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 17:11:38 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/24 10:23:49 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "utils_bis.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int	str_is_number(char *str)
{
	while (*str && (*str <= '9' && *str >= '0'))
		str++;
	if (*str == 0)
		return (1);
	else
		return (0);
}

int	handle_option_error(char *offset)
{
	ft_putstr("tail: illegal offset -- ", 2);
	ft_putstr(offset, 2);
	ft_putstr("\n", 2);
	return (-1);
}

int	check_option(char **av)
{
	int	i;

	i = 1;
	if (ft_strncmp(av[1], "-c", 2) == 0)
	{
		if (ft_strlen(av[1]) != 2)
		{
			if (str_is_number(av[1] + 2))
				return (ft_atoi(av[1] + 2));
			else
				return (handle_option_error(av[1] + 2));
		}
		else
		{
			if (av[2] && str_is_number(av[2]))
				return (ft_atoi(av[2]));
			else
				return (handle_option_error(av[2]));
		}
	}
	return (-1);
}
