/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:00:55 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/24 12:26:08 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

long	add(long a, long b)
{
	return (a + b);
}

long	sub(long a, long b)
{
	return (a - b);
}

long	mul(long a, long b)
{
	return (a * b);
}

long	div(long a, long b)
{
	return (a / b);
}

long	mod(long a, long b)
{
	return (a % b);
}
