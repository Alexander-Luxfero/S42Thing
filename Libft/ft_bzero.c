#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	unsigned char	*str;

	i = -1;
	str = (unsigned char *)s;
	while (n > ++i)
		str[i] = 0;
}
