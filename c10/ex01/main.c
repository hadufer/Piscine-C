/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 10:06:29 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/23 12:00:54 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "ft_read_file.h"
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int	handle_error(char *path)
{
	ft_putstr("cat:", 2);
	ft_putstr(" ", 2);
	ft_putstr(path, 2);
	ft_putstr(": ", 2);
	ft_putstr(strerror(errno), 2);
	ft_putstr("\n", 2);
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	fd;

	i = 1;
	if (ac < 2 || (av[1] && (ft_strlen(av[i]) > 0 && av[1][0] == '-')))
	{
		ft_read_display_file(1);
	}
	while (i < ac)
	{
		fd = open(av[i], O_RDONLY);
		if (fd == -1)
			handle_error(av[i]);
		else if (ft_read_display_file(fd) < 0)
		{
			handle_error(av[i]);
		}
		close(fd);
		i++;
	}
	return (0);
}
