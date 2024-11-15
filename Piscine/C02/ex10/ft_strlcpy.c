/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:32:46 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/15 23:45:51 by akuzmin          ###   ########.fr       */
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
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (length);
}
/*
#include <stdio.h>
#include <bsd/string.h>
//Test
//cc ft_strlcpy.c -lbsd
int main(void)
{
    char src[] = "Hello, World!";
    char src_std[] = "Hello, World!";
    char dest[5];
    char dest_std[5];

    unsigned int length = ft_strlcpy(dest, src, 5);
    unsigned int length_std = strlcpy(dest_std, src_std, 5);

    printf("New string custom: %s\n", dest);
    printf("Length of previous custom: %d\n", length);

    printf("New string std: %s\n", dest_std);
    printf("Length of previous std: %d\n", length_std);

    printf("%s\n", (strcmp(dest, dest_std) == 0)  ? "OK!" : "KO!");

    return (0);
}
*/
