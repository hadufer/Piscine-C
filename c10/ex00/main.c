/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 10:06:11 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/22 10:47:36 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read_file.h"
#include "utils.h"
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int	fd;

	if (argc < 2)
	{
		ft_putstr("File name missing.", 2);
		return (0);
	}
	else if (argc > 3)
	{
		ft_putstr("Too many arguments.", 2);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (ft_read_file(fd) < 0)
	{
		ft_putstr("Cannot read file.", 2);
	}
	return (0);
}
