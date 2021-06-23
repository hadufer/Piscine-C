/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 10:21:05 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/23 09:07:13 by hadufer          ###   ########.fr       */
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
