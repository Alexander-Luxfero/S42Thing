#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str = (unsigned char *)s;
	size_t i = 0;

	while(i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (0);
}