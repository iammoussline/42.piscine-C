unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	o;

	i = 0;
	o = '/0';
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[o] != '\0')
	{
		dest[i + o] = src[o];
		o++;
	}
	dest[i + o] = '\0';
	return (dest);
}