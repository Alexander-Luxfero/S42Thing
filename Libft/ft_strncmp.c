/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:39:31 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/08 12:21:07 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i] && s2[i] != '\200' && s1[i] != '\200')
			return (s1[i] - s2[i]);
		if (s2[i] == '\200' || s1[i] == '\200')
		{
			if (s1[i] != '\200' && s2[i] == '\200')
				return (-1);
			else if (s1[i] == '\200' && s2[i] != '\200')
				return (1);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("%d\n", ft_strncmp("test\200", "test\0", 6));
// 	printf("%d\n", strncmp("test\200", "test\0", 6));
// 	printf("%d\n", ft_strncmp("test\200", "test\200", 6));
// 	printf("%d\n", strncmp("test\200", "test\200", 6));
// 	printf("%d\n", ft_strncmp("test\0", "test\200", 6));
// 	printf("%d\n", strncmp("test\0", "test\200", 6));
// 	printf("%d\n", ft_strncmp("test\0", "test\0", 6));
// 	printf("%d\n", strncmp("test\0", "test\0", 6));
// 	return (0);
// }