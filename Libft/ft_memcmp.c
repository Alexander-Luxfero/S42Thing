int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned char *str1 = (unsigned char *)s1;
	unsigned char *str2 = (unsigned char *)s2;

	while(i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}