/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 09:49:24 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/08 19:00:11 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	remainder;

	remainder = ft_strlen(dest) - ft_strlen(src);
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (ft_strlen(src) < n)
	{
		if (remainder < 0)
			return (dest);
		while (remainder)
		{
			dest[i] = 0;
			i++;
			remainder--;
		}
	}
	return (dest);
}
