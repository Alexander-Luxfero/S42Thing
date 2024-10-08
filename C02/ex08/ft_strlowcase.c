/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:17:17 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/07 11:18:28 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
//Test
int main(void)
{
    //If Ok print 0 first time and 1 second!
    char text[18] = "Where Is the Will";
    ft_strlowcase(text);
printf("If OK: %s\n", text);
    return (0);
}
*/
