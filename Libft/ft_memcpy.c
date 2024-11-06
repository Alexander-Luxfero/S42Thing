void *ft_memcpy(void *restrict dst, const void *restrict src, unsigned int n)
{
	unsigned int i;
	unsigned char *d = (unsigned char *)dst;
	unsigned char *s = (const unsigned char *)src;

	i = -1;
	while(++i < n)
		d[i] = s[i];
	return (dst);
}