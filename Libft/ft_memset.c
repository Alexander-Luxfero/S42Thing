void *ft_memset(void *b, int c, unsigned int len)
{
	unsigned int i;
	unsigned char *str;

	i = -1;
	str = (unsigned char *)b;
	while(len > ++i)
		str[i] = (unsigned char)c;
	return (b);
}