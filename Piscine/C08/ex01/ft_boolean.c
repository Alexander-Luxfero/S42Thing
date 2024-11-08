/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:56:27 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/08 08:47:34 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_boolean.h"

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

t_bool ft_is_even(int nbr)
{
    return ((EVEN(nbr)) ? TRUE : FALSE);
}

int main(int argc, char **argv)
{
    (void)argv;
    if (ft_is_even(argc - 1) == TRUE)
    ft_putstr(EVEN_MSG);
    else
    ft_putstr(ODD_MSG);
    return (SUCCESS);
}
