/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 09:49:52 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/14 11:47:15 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_sqrt(int nb);

int main()
{
	//int nb = -1;
	//printf("%d\n", ft_sqrt(nb));
	printf("sqrt of %d is %d\n", -1216, ft_sqrt(-1216));
        printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
        printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
        printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
        printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
        printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
        printf("sqrt of %d is %d\n", 2147483646, ft_sqrt(2147483646));
        printf("sqrt of %d is %d\n", 1283287329, ft_sqrt(1283287329));
        printf("sqrt of %d is %d\n", 1614988097, ft_sqrt(1614988097));
        printf("sqrt of %d is %d\n", 1446737296, ft_sqrt(1446737296));
        printf("sqrt of %d is %d\n", 1810816658, ft_sqrt(1810816658));
        printf("sqrt of %d is %d\n", 1713481, ft_sqrt(1713481));
        printf("sqrt of %d is %d\n", 1304959886, ft_sqrt(1304959886));
        printf("sqrt of %d is %d\n", 102697956, ft_sqrt(102697956));
        printf("sqrt of %d is %d\n", 136849558, ft_sqrt(136849558));
        printf("sqrt of %d is %d\n", 549011761, ft_sqrt(549011761));
        printf("sqrt of %d is %d\n", 1057931015, ft_sqrt(1057931015));
}
