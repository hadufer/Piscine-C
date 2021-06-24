/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 10:21:05 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/24 10:47:59 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read_file.h"
#include "utils.h"
#include <fcntl.h>
#include <unistd.h>

int	ft_read_display_file(int fd)
{
	char	c;
	int		n;

	n = 1;
	while (n > 0)
	{
		n = read(fd, &c, 1);
		ft_putchar(c);
	}
	return (read(fd, &c, 1));
}
