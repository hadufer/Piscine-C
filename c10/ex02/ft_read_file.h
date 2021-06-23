/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 10:29:08 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/23 14:34:21 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_READ_FILE_H
# define FT_READ_FILE_H
int		ft_read_display_file(int fd);
int		ft_check_file(char *path);
int		ft_count_line(char *path);
int		ft_read_display_tail(char *path, int lines);
#endif
