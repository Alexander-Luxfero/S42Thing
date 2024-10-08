/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:27:26 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/07 12:28:55 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	length_str1;
	unsigned int	i;

	length_str1 = 0;
	while (dest[length_str1] != '\0')
		length_str1++;
	i = 0;
	while (src[i] != '\0')
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
    ft_strcat(str1, str2);
    strcat(str3, str2);
    
    printf("%s", strcmp(str1, str3) == 0 ? "OK!\n" : "KO!\n");

    return (0);
}
*/
