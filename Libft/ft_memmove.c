void *ft_memmove(void *dst, const void *src, unsigned int len)
{
	unsigned int i;
	unsigned char *d = (unsigned char *)dst;
	unsigned char *s = (const unsigned char *)src;

	if (d == s || len == 0)
		return (dst);
	if (d < s)
	{
		i = -1;
		while (++i < len)
			d[i] = s[i];
	}
	else
	{
		i = len;
		while (--i >= 0)
			d[i] = s[i];
	}
	return (dst);
}