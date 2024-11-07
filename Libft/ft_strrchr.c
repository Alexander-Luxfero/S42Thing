#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_ocur;

	last_ocur = 0;
	while (*s)
	{
		if (*s == (char)c)
			last_ocur = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (last_ocur);
}
