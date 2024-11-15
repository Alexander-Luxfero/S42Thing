/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 08:46:38 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/15 23:45:51 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

/*
//Test
int main(void)
{
	int a = 5;
    int b = 2;
    int div = 0;
    int mod = 0;
	ft_div_mod( a, b, &div, &mod );
	//if work shows div = 2 mod = 1
    char c[] = "div = 0 -> mod = 0\n";
    c[6] = div + '0';
    c[17] = mod + '0';
	write(1, &c, 19);
	return (0);
}
*/
