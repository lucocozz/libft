int	ft_atoi(char *str)
{
	int neg;
	int i;
	int res;

	neg = 0;
	res = 0;
	
	for (i = 0; str[i] != '-' && !(str[i] >= '0' && str[i] <= '9'); i++)
	{
		if (str[i] != ' ')
			return 0;
	}

	if (str[i] == '-')
	{
		neg = 1;
		i++;
	}
	
	for (i = i; str[i] >= '0' && str[i] <= '9'; i++)
		res = res * 10 + str[i] - '0';

	return ((neg) ? -res : res);
}
