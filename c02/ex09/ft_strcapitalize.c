/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:22:16 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/07 11:44:18 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_char_alphanum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	if (!str || *str == 0)
		return (str);
	while (str[i])
	{
		if (ft_is_char_alphanum(str[i]))
		{
			if (new_word == 1 && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] -= 32;
			}
			else if (new_word == 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}
