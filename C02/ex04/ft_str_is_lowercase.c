/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:31:41 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/07 11:34:30 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
    char text[14] = "WhereIsTheWill";
    char new = ft_str_is_lowercase(text);
    printf("%s\n", (new == 0 ? "OK!" : "KO!"));

    char text1[14] = "whereisthewill";
    char new1 = ft_str_is_lowercase(text1);
    printf("%s\n", (new1 == 1 ? "OK!" : "KO!"));
    return (0);
}
*/
