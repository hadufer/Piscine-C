/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 09:31:32 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/09 12:33:50 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_l;
	unsigned int	src_l;

	dest_l = ft_strlen(dest);
	src_l = ft_strlen(src);
	i = 0;
	j = 0;
	if (!size || dest_l > size)
		return (src_l + size);
	while (dest[i])
		i++;
	while (src[j] && ((i + j) < size - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (src_l + i);
}
