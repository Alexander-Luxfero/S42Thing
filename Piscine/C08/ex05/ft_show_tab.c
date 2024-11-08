/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 08:46:38 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/08 08:47:35 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char		val_to_print;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	val_to_print = (nb % 10) + '0';
	write(1, &val_to_print, 1);
}

void ft_show_tab(struct s_stock_str *par)
{
    int i;

    i = 0;
    while (par[i].str != 0)
    {
        write(1, par[i].str, par[i].size);
        write(1, "\n", 1);
        ft_putnbr(par[i].size);
        write(1, "\n", 1);
        write(1, par[i].copy, par[i].size);
        write(1, "\n", 1);
        i++;
    }
}
