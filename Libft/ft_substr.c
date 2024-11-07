#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*out;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (malloc(1));
	if (len > s_len - start)
		len = s_len - start;
	out = malloc(len + 1);
	if (!out)
		return (NULL);
	i = 0;
	while (i < len && s[i + start] != '\0')
	{
		out[i] = s[i + start];
		i++;
	}
	out[i] = '\0';
	return (out);
}
