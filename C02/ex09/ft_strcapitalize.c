/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:24:00 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/08 12:28:18 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first_char;

	i = 0;
	first_char = 1;
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]))
		{
			if (first_char && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				first_char = 0;
			}
			else if (!first_char && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			else
				first_char = 0;
		}
		else if (!(str[i] >= '0' && str[i] <= '9'))
			first_char = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>
//Test
int main(void)
{
    //If Ok print 0 first time and 1 second!
    char t[]="salut, comMEnt tu vas ? 42mots quarante-deux; cinquante+et+un";
    char c[]="Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un";
    ft_strcapitalize(t);
    printf("%s\n", strcmp(t, c) ? "OK!" : "KO!");
    return (0);
}
*/
