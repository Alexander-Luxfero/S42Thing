/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:47:27 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/12 15:56:36 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_char_position(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
	{
		if (s[len] == '\n' || s[len] == '\0')
			return (len);
		len++;
	}
	return (0);
}

char	*ft_strjoin_mod(char *s1, char *s2, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1)
		s1 = malloc(1);
	i = ft_strlen(s1);
	new_str = malloc(i + len + 1);
	if (!new_str)
		return (free(s1), NULL);
	i = -1;
	while (s1[++i])
		new_str[i] = s1[i];
	while (j < len)
		new_str[i++] = s2[j++];
	new_str[i] = '\0';
	free(s1);
	return (new_str);
}
