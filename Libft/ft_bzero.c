void	ft_bzero(void *s, unsigned int n)
{
	unsigned int i;
	unsigned char *str = (unsigned char *)s;

	i = -1;
	while(n > ++i)
		str[i] = 0;
}