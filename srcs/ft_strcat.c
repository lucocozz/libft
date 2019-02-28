char	*ft_strcat(char *dest, char const *src)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return dest;
}
