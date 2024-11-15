/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:35:08 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/15 23:45:51 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
//Test
int main(void)
{
    //If Ok print 0 first time and 1 second!
    char text[14] = "WhereIsTheWill";
    char new = ft_str_is_numeric(text);
    printf("%s\n", (new == 0 ? "OK!" : "KO!"));

    char text1[14] = "123";
    char new1 = ft_str_is_numeric(text1);
    printf("%s\n", (new1 == 1 ? "OK!" : "KO!"));
    return (0);
}
*/
