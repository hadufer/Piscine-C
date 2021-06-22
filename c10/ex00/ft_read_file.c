/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 10:21:05 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/22 10:45:30 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read_file.h"
#include "utils.h"
#include <fcntl.h>
#include <unistd.h>

int	ft_read_file(int fd)
{
	char	buf[1];
	int		n_read;

	while ((n_read = read(fd, buf, 1) > 0))
	{
		ft_putchar(buf[0]);
	}
	return (n_read);
}
