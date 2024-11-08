/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:55:06 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/08 08:47:35 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
//Test
int main(void)
{
    char text[] = "Where is the will, there is the way.";
    char new[40];
    char new1[40];

    ft_strcpy(new, text);
    strcpy(new1, text);

    printf("%s\n", new);
    printf("%s\n", new1);
    printf("%s\n", strcmp(new, new1) == 0 ? "OK!" : "KO!");
    return (0);
}
*/
