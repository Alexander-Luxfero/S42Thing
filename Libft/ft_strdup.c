#include "libft.h"

char	*ft_strdup(char *src)
{
    char	*copy;
    int		length;
    int		i;

	length = 0;
	while (src[length])
		length++;
	copy = malloc((length + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	i = -1;
	while (++i < length)
		copy[i] = src[i];
	copy[i] = '\0';
	return (copy);
}
