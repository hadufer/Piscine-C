int ft_strncmp(char *s1, char *s2, unsigned int n){
	char			*tmp_1;
	char			*tmp_2;
	unsigned int	i;

	i = 0;
	tmp_1 = s1;
	tmp_2 = s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		while (*tmp_1)
		{
			if (*tmp_2 == 0)
				return (1);
			if (*tmp_2 > *tmp_1)
				return (-1);
			if (*tmp_1 > *tmp_2)
				return (1);
			tmp_1++;
			tmp_2++;
		}
	}
	if (*tmp_2 != 0)
			return (-1);
	return 0;
}
