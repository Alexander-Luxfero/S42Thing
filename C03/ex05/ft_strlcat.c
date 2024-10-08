/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:43:59 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/07 12:46:02 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_length(char *str)
{
	unsigned int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	length_dest;
	unsigned int	length_src;
	unsigned int	i;

	length_dest = str_length(dest);
	length_src = str_length(src);
	i = 0;
	if (size <= length_dest)
		return (size + length_src);
	while (src[i] != '\0' && (length_dest + i) < (size - 1))
	{
		dest[length_dest + i] = src[i];
		i++;
	}
	dest[length_dest + i] = '\0';
	return (length_dest + length_src);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "String first, ";
    char str2[] = "concated with second, and this is gone.";
    int len = 36;

    unsigned int custom = ft_strlcat(str1, str2, len);

    printf("%s", (custom) ? "OK!\n" : "KO!\n");
    printf("Custom result: %s|||END|||\n", str1);
    return 0;
}
*/
