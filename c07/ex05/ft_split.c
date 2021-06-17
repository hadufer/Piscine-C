/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 08:57:25 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/17 16:01:58 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	find_c(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	count_word(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (find_c(charset, str[i]) == -1)
		{
			count++;
			while (find_c(charset, str[i]) == -1)
				i++;
		}
		else
		{
			i++;
		}
	}
	return (count);
}

int	ft_strlen_c(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (find_c(charset, str[i]) != -1)
			return (i);
		i++;
	}
	return (i);
}

void	ft_split_util(int tmp[3], int word_len, char *str, char **ret)
{
	while (tmp[1] < word_len)
	{
		ret[tmp[0]][tmp[1]] = str[tmp[2]];
		tmp[1]++;
		tmp[2]++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**ret;
	int		word;
	int		word_len;
	int		tmp[3];

	tmp[0] = 0;
	tmp[2] = 0;
	word = count_word(str, charset);
	ret = malloc((word + 1) * sizeof(char *));
	while (tmp[0] < word)
	{
		while (find_c(charset, str[tmp[2]]) != -1)
			tmp[2]++;
		word_len = ft_strlen_c(str + tmp[2], charset);
		ret[tmp[0]] = malloc(sizeof(char) * (word_len + 1));
		tmp[1] = 0;
		ft_split_util(tmp, word_len, str, ret);
		tmp[2]++;
		ret[tmp[0]][tmp[1]] = 0;
		tmp[0]++;
	}
	ret[tmp[0]] = NULL;
	return (ret);
}
