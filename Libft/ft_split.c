#include "libft.h"

size_t	word_count(const char *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			words++;
			while (*s && *s != c)
				s++;
		}
	}
	return (words);
}

char	**ft_split(const char *s, char c)
{
	size_t	words;
	size_t	i;
	size_t	len;
	char	**list;

	if (!s)
		return (NULL);
	words = word_count(s, c);
	list = malloc(sizeof(char *) * (words + 1));
	if (!list)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		list[i] = malloc(len + 1);
		if (!list[i])
		{
			while (i > 0)
				free(list[--i]);
			free(list);
			return (NULL);
		}
		ft_strlcpy(list[i], s, len + 1);
		s += len;
		i++;
	}
	list[i] = NULL;
	return (list);
}