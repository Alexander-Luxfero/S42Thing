/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:23:55 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/14 11:40:14 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
//Test
#include <stdio.h>

int main(void)
{
    //If Ok print 0 first time and 1 second!
    char text[14] = "WHEREISTHEWILL";
    char new = ft_str_is_uppercase(text);
    printf("%s\n", (new == 1 ? "OK!" : "KO!"));

    char text1[14] = "Where!s3heWill";
    char new1 = ft_str_is_uppercase(text1);
    printf("%s\n", (new1 == 0 ? "OK!" : "KO!"));
    return (0);
}
*/
