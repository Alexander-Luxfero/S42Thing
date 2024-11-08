/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:33:43 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/08 08:47:36 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*cont_str;
	char	*cont_find;

	if (!*to_find)
		return ((char *)str);
	while (*str)
	{
		cont_str = str;
		cont_find = to_find;
		while (*cont_str && *cont_find && *cont_find == *cont_str)
		{
			cont_str++;
			cont_find++;
		}
		if (!*cont_find)
			return ((char *)str);
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[36] = "Hello, and welcome to code!";
    char str2[] = "code";
    char str3[] = "togle";

    char *result1 = ft_strstr(str1, str2);
    char *result2 = strstr(str1, str2);
    char *result3 = ft_strstr(str1, str3);
    char *result4 = strstr(str1, str3);
    
    printf("%s", result1 == result2 ? "OK!\n" : "KO!\n");
    printf("%s", result3 == result4 ? "OK!\n" : "KO!\n");
    return (0);
}
*/
