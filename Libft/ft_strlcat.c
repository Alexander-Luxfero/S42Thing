unsigned int	ft_strlcat(char * restrict dst, const char * restrict src, unsigned int dstsize)
{
	unsigned int	length_dest;
	unsigned int	length_src;
	unsigned int	i;

	length_src = 0;
	while (src[length_src] != '\0')
		length_src++;
	length_dest = 0;
	while (dst[length_dest] != '\0' && dstsize > length_dest)
		length_dest++;
	if (dstsize <= length_dest)
		return (dstsize + length_src);
	i = 0;
	while (src[i] != '\0' && (length_dest + i) < (dstsize - 1))
	{
		dst[length_dest + i] = src[i];
		i++;
	}
	dst[length_dest + i] = '\0';
	return (length_dest + length_src);
}