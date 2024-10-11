/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:24:00 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/10 11:06:12 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	is_num(char c)
{
	return (c >= '0' && c <= '9');
}

char	conv(char alpha, int first_char)
{
	char	out;

	if (alpha >= 97 && alpha <= 122 && first_char == 1)
		out = alpha - 32;
	else if (alpha >= 65 && alpha <= 90 && first_char == 0)
		out = alpha + 32;
	else
		out = alpha;
	return (out);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first_char;

	i = 0;
	first_char = 1;
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]) || is_num(str[i]))
		{
			str[i] = conv(str[i], first_char);
			first_char = 0;
		}
		else
		{
			first_char = 1;
		}
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
    char t[]="salut, Comment tu vAs ? 42Mots Quarante-Deux; Cinquante+Et+Un";
    char c[]="Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un";
    ft_strcapitalize(t);
    printf("%s\n", t);
    printf("%s\n", c);
    printf("%s\n", strcmp(t, c) ? "OK!" : "KO!");
    return (0);
}
*/
