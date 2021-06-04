/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:22:53 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/04 19:31:46 by hadufer          ###   ########.fr       */
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

	i = 0;
	if ((dest == 0 || src == 0) || (*dest == 0 || *src == 0))
		return (0);
	if (!size || ft_strlen(src) > size)
		return (ft_strlen(src));
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(src));
}
