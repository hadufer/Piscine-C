/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:22:16 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/04 12:56:42 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (*str == 0)
		return (1);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (*str == 0)
		return (1);
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 0;
	if (!str || *str = 0)
			return str;
	while (str[i])
	{
	// FAIRE TOUTE CETTE MERDE A LA MAIN
		if(new_word == 1 && ft_str_is_numeric((str + i)) && ft_str_is_alpha((str + i)))
		{
			new_word = 0;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		else
			new_word = 1;
		i++;
	}
}
