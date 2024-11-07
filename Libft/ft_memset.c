#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *str;

	i = -1;
	str = (unsigned char *)b;
	while(len > ++i)
		str[i] = (unsigned char)c;
	return (b);
}