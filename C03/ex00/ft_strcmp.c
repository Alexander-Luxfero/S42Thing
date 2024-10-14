/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:07:02 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/11 11:55:47 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int out;
	
	out = 0;
	while (*s1 || *s2)
	{
		out = (int)((unsigned char)*s1 - (unsigned char)*s2);
		if  (*s1 != *s2)
			return (out);
		s1++;
		s2++;
	}
	return (out);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[36] = "String firs";
    char str2[] = "concated with second";
    char str3[36] = "String first, ";
    printf("C:%d\n",ft_strcmp(str1,str3));
	printf("S:%d\n",strcmp(str1,str3));

	printf("C:%d\n",ft_strcmp(str2,str3));
	printf("S:%d\n",strcmp(str2,str3));

	printf("C:%d\n",ft_strcmp(str1,str2));
	printf("S:%d\n",strcmp(str1,str2));

	printf("C:%d\n",ft_strcmp(str3,str1));
	printf("S:%d\n",strcmp(str3,str1));

    return (0);
}
*/