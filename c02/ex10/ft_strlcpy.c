/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:22:53 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/07 18:46:38 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_size;
	unsigned int	dest_size;

	i = 0;
	if (str)
	src_size = ft_strlen(src);
	dest_size = ft_strlen(dest);
	while (src[i])
	{
		if (size < i)
			return (i + 1);
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (i + 1);
}
