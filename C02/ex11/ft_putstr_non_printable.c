/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:52:42 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/07 10:56:56 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	convert_to_hex(unsigned char ch)
{
	putchar('\\');
	putchar("0123456789abcdef"[ch / 16]);
	putchar("0123456789abcdef"[ch % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			putchar(str[i]);
		else
			convert_to_hex((unsigned char)str[i]);
		i++;
	}
}
/*
//Test
int main(void){
    char text[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(text);
    return (0);
}
*/
