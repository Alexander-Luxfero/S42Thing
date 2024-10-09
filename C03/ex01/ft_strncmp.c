/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:22:12 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/07 12:23:55 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i] && i < n)
			return (s1[i] - s2[i]);
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
    
  printf("%s",(ft_strncmp(str1,str3,7)==strncmp(str1,str3,7))?"OK\n":"KO\n");
  printf("%s",(ft_strncmp(str1,str2,7)==strncmp(str1,str2,7))?"OK\n":"KO\n");

    return (0);
}
*/
