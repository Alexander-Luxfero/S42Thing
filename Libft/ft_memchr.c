void *ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char *str = (unsigned char *)s;
	unsigned int i = 0;

	while(i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (0);
}