/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 09:00:36 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/16 17:53:51 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <limits.h>

int	ft_atoi_base(char *str, char *base);
char	*ft_ltoa_base(long nbr, char *base);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int	main()
{
	char *str = strdup("         ++++ 2147483647");
	char *base_from = strdup("0123456789");
	char *base_to = strdup("ab");
	printf("%d\n", ft_atoi_base(str, base_from));
	printf("%s\n", ft_ltoa_base(255, base_to));
	printf("%s\n", ft_convert_base(str, base_from, base_to));
}
