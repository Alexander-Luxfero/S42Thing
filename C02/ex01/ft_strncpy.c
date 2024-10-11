/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:57:05 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/08 10:59:40 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
        while (i < n)
        {
        	dest[i] = '\0';
        	i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
//Test
int main(void)
{
    char text[] = "Where is a will, there is a way.";
    char new[30];
    char new1[30];

    ft_strncpy(new, text, 20);
    strncpy(new1, text, 20);

    printf("%s\n", new);
    printf("%s\n", new1);
    printf("%s\n", strcmp(new, new1) == 0 ? "OK!" : "KO!");
    return (0);
}
*/
