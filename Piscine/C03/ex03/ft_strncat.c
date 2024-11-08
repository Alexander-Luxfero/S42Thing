/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:30:23 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/08 08:47:36 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	length_str1;
	unsigned int	i;

	length_str1 = 0;
	while (dest[length_str1] != '\0')
		length_str1++;
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[length_str1 + i] = src[i];
		i++;
	}
	dest[length_str1 + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[36] = "String first, ";
    char str2[] = "concated with second";
    char str3[36] = "String first, ";
    ft_strncat(str1, str2, 40);
    strncat(str3, str2, 40);
    
	printf("%s\n", str1);
	printf("%s\n", str3);
    printf("%s", strcmp(str1, str3) == 0 ? "OK!\n" : "KO!\n");

    return (0);
}
*/
