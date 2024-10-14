/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:43:59 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/10 17:47:44 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	length_dest;
	unsigned int	length_src;
	unsigned int	i;

	length_src = 0;
	while (src[length_src] != '\0')
		length_src++;
	length_dest = 0;
	while (dest[length_dest] != '\0')
		length_dest++;
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
#include <bsd/string.h>

int main() {
    char str1[50] = "String first, ";
    char str2[] = "concated with second, and this is gone.";
   

    unsigned int custom = ft_strlcat(str1, str2, 36);
    printf("Custom result: %s|||END|||\n", str1);
    printf("len: %d\n", custom);
    
    return 0;
}*/
