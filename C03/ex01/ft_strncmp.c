/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:22:12 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/14 10:53:03 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				out;

	i = 0;
	out = 0;
	while (i < n)
	{
		out = s1[i] - s2[i];
		if (s1[i] != s2[i])
			return (out);
		i++;
	}
	return (out);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "String firs";
    char str2[] = "Strcated with second";
    char str3[] = "String first, ";

	printf("test1\nC:%d\n",ft_strncmp(str1,str3, 13));
	printf("S:%d\n",strncmp(str1,str3, 13));

	printf("test2\nC:%d\n",ft_strncmp(str2,str3, 20));
	printf("S:%d\n",strncmp(str2,str3,20));

	printf("test3\nC:%d\n",ft_strncmp(str1,str2,3));
	printf("S:%d\n",strncmp(str1,str2,3));

	printf("test4\nC:%d\n",ft_strncmp(str3,str1,3));
	printf("S:%d\n",strncmp(str3,str1,3));
    
  printf("%s",(ft_strncmp(str1,str3,7)==strncmp(str1,str3,7))?"OK\n":"KO\n");
  printf("%s",(ft_strncmp(str1,str2,7)==strncmp(str1,str2,7))?"OK\n":"KO\n");

    return (0);
}
*/
