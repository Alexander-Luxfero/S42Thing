/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 21:14:25 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/13 21:18:22 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_pointer(void *ptr)
{
	unsigned long	address;
	char			*base16;
	int				i;
	char			hex_address[16];

	address = (unsigned long)ptr;
	base16 = "0123456789abcdef";
	write(1, "0x", 2);
	if (ptr == NULL)
	{
		write(1, "0", 1);
		return (3);
	}
	i = 15;
	while (i >= 0)
	{
		hex_address[i] = base16[address % 16];
		address /= 16;
		i--;
	}
	write(1, hex_address, 9);
	return (18);
}
