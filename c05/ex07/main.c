/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 12:26:28 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/14 15:41:05 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
int	ft_find_next_prime(int nb);
int	main()
{
	int	nb = INT_MIN;

	printf("%d\n",ft_find_next_prime(nb));
}
