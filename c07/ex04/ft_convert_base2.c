/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:50:12 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/16 09:41:42 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_c(char *str, char c)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

long	ft_atoi(char *str, unsigned int base_l, char *base)
{
	unsigned int	i;
	long			tmp[2];

	i = 0;
	tmp[0] = 1;
	tmp[1] = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			tmp[0] *= -1;
		i++;
	}
	while (find_c(base, str[i]) != -1)
	{
		tmp[1] = find_c(base, str[i]) + (base_l * tmp[1]);
		i++;
	}
	return (tmp[1] * tmp[0]);
}

int	parse_base(char *base)
{
	unsigned int	i;

	i = 0;
	if (find_c(base, '+') != -1 || find_c(base, '-') != -1)
		return (1);
	while (base[i])
	{
		if (find_c(base + i + 1, base[i]) != -1)
			return (1);
		i++;
	}
	return (0);
}

long	ft_atoi_base(char *str, char *base)
{
	unsigned int	i;
	unsigned int	base_l;

	i = 0;
	base_l = 0;
	if (!base || !*base || !str || !*str)
		return (0);
	while (base[base_l])
		base_l++;
	if (base_l <= 1 || parse_base(base))
		return (0);
	return (ft_atoi(str, base_l, base));
}
