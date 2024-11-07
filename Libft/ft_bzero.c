#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *str = (unsigned char *)s;

	i = -1;
	while(n > ++i)
		str[i] = 0;
}