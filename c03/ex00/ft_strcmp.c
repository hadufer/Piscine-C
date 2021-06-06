int	ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

int ft_strcmp(char *s1, char *s2){
	char	*tmp_1;
	char	*tmp_2;

	tmp_1 = s1;
	tmp_2 = s2;
	while (*tmp_1)
	{
		if (*tmp_2 == 0)
			return (1);
		if (*tmp_2 > *tmp_1)
			return (-1);
		if (*tmp_2 < *tmp_1)
			return (1);
		tmp_1++;
		tmp_2++;
	}
	if (*tmp_2 != 0)
		return (-1);
	return 0;
}
