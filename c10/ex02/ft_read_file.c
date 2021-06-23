/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 10:21:05 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/23 15:47:07 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read_file.h"
#include "utils.h"
#include <fcntl.h>
#include <unistd.h>

int	ft_read_display_file(int fd)
{
	char	c;

	while (read(fd, &c, 1) > 0)
		ft_putchar(c);
	return (read(fd, &c, 1));
}

int	ft_check_file(char *path)
{
	char	c;
	int		fd;

	fd = open(path, O_RDONLY);
	while (read(fd, &c, 1) > 0)
		c = 0;
	close(fd);
	return (read(fd, &c, 1));
}

int	ft_count_line(char *path)
{
	char	c;
	int		count;
	int		fd;

	fd = open(path, O_RDONLY);
	count = 0;
	while (read(fd, &c, 1) > 0)
	{
		if (c == '\n')
			count++;
	}
	close(fd);
	return (count);
}

int	ft_read_display_tail(char *path, int lines)
{
	char	c;
	int		fd;

	fd = open(path, O_RDONLY);
	while (((lines - 10) > 0) && read(fd, &c, 1) > 0)
		if (c == '\n')
			lines--;
	ft_read_display_file(fd);
	close(fd);
	return (0);
}
