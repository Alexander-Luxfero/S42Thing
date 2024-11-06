char *ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	unsigned int i;
	unsigned int s;

	i = 0;
	if (needle[0] == 0)
		return (haystack);
	while (i < len && haystack[i])
	{
		s = 0;
		while ((s + i) < len && (haystack[i + s] == needle[s]))
		{
			s++;
			if(needle[s] == '\0')
				return (haystack + i);
		}
		i++;
	}
	return (0);
}