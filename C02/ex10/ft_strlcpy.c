/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:32:46 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/08 12:35:49 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	while (src[length] != '\0')
		length++;
	if (size != 0)
	{
		while (src[i] != '\0' && i <= size)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (length++);
}
/*
#include <stdio.h>
#include <string.h>
//Test
int main(void)
{
    //If Ok print 0 first time and 1 second!
    char src[] = "Hello, World!";
    char dest[5];
    char dest_std[5];

    unsigned int length = ft_strlcpy(dest, src, 5);
    unsigned int length_std = strlcpy(dest_std, src, 5);
    
    int ans = strcmp(dest, dest_std);

    printf("%s\n", (ans == 1 && length == length_std) ? "OK!" : "KO!");

    printf("New string custom: %s\n", dest);
    printf("Length of previous std: %d\n", length);

    printf("New string std: %s\n", dest);
    printf("Length of previous std: %d\n", length);
    return (0);
}
*/
