/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:24:26 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/16 18:36:45 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	parse_base(char *str);

int	ft_atoi_base(char *str, char *base);

long	ft_strlen(char *str)
{
	long	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_ltoa_base(long nbr, char *base)
{
	long			base_l;
	long			tmp_nbr;
	char			*str;
	int				sign;
	long			i;

	tmp_nbr = nbr;
	i = 0;
	sign = 0;
	base_l = ft_strlen(base);
	if (nbr < 0)
	{
		nbr *= -1;
		sign = -1;
	}
	while (tmp_nbr)
	{
		tmp_nbr /= base_l;
		i++;
	}
	str = malloc(sizeof(char) * (i + 1 - sign));
	if (!nbr)
	{
		str[0] = base[nbr % base_l];
		str[1] = 0;
		return (str);
	}
	if (sign)
		str[0] = '-';
	i -= sign;
	str[i--] = 0;
	while ((i > -1 && !sign) || (i > 0 && sign))
	{
		str[i] = base[nbr % base_l];
		nbr /= base_l;
		i--;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	ret;

	ret = 0;
	if (ft_strlen(base_from) <= 1
		|| ft_strlen(base_to) <= 1
		|| parse_base(base_from)
		|| parse_base(base_to))
		return (NULL);
	ret = ft_atoi_base(nbr, base_from);
	return (ft_ltoa_base(ret, base_to));
}
