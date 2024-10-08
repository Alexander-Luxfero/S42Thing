/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:07:02 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/07 12:19:20 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			else
				return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[36] = "String first, ";
    char str2[] = "concated with second";
    char str3[36] = "String first, ";
    
    printf("%s",(ft_strcmp(str1,str3)==strcmp(str1,str3)) ? "OK\n" : "KO\n");
    printf("%s",(ft_strcmp(str1,str2)==strcmp(str1,str2)) ? "OK\n" : "KO\n");

    return (0);
}
*/
