/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 09:19:37 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/17 17:43:42 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int	main()
{
	int	i;
	char	*str = "sadasdasd s sda ds n";
	char	*charset = ",";

	i = 0;
	char **tab = ft_split(str, charset);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	free(tab);
}
