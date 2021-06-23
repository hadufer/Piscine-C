/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 10:06:29 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/23 19:32:58 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "ft_read_file.h"
#include "ft_read_file2.h"
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int	handle_error(char *path)
{
	ft_putstr("tail:", 2);
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
	int	lines;

	i = 1;
	lines = 0;
	if (ac < 2)
	{
		while (1);
		return (0);
	}
	while (i < ac)
	{
		if (i == 1)
		{
			if (check_option() == -1)
				// Fonction qui gerre les erreurs ici
		}
		if (ft_check_file(av[i]) == -1)
			handle_error(av[i]);
		lines = ft_count_line(av[i]);
		ft_read_display_tail(av[i], lines);
		i++;
	}
	return (0);
}
