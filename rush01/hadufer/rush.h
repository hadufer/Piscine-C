/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 16:03:07 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/12 16:03:20 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# define TAB_SIZE 4

int	check_row_right(int i, int j, int tab[][4], int v_tab[][4]);
int	check_row_left(int i, int j, int tab[][4], int v_tab[][4]);
int	check_col_down(int i, int j, int tab[][4], int v_tab[][4]);
int	check_col_up(int i, int j, int tab[][4], int v_tab[][4]);
int	solver(int i, int j, int tab[][4], int v_tab[][4]);

#endif
