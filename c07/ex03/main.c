/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 15:48:48 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/17 11:27:07 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int main(int argc, char **argv)
{
	char *c = "669";
	printf("%s\n", ft_strjoin(argc - 1, argv + 1, c));
}
