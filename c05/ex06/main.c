/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 10:01:26 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/14 15:13:10 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
int	ft_is_prime(int nb);

int main()
{
	//int	test = 1;
	int nb = 8;
	printf("%d is prime ? (0 == no || 1 == yes) %d \n", nb, ft_is_prime(nb));
//	while (test <=  INT_MAX)
//	{
//		printf("%d -> %d\n", test, ft_is_prime(test));
//		test++;
//	}
}
