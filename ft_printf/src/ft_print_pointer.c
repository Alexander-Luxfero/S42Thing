/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:45:53 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/15 23:45:53 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_use_that_shit(char *str)
{
	size_t	len;
	size_t	i;

	i = 2;
	len = 0;
	len += ft_putchar(str[0]);
	len += ft_putchar(str[1]);
	while (str[i] == '0' && str[i + 1] != '\0')
		i++;
	len += ft_putstr(&str[i]);
	return (len);
}

// for linus (nil) for macOS 0x0
size_t	ft_print_pointer(void *ptr)
{
	unsigned long	address;
	char			*base16;
	int				i;
	char			*hex_address;
	size_t			len;

	hex_address = malloc(19);
	hex_address[18] = '\0';
	address = (unsigned long)ptr;
	base16 = "0123456789abcdef";
	i = 17;
	hex_address[0] = '0';
	hex_address[1] = 'x';
	while (i >= 2)
	{
		hex_address[i] = base16[address % 16];
		address /= 16;
		i--;
	}
	len = ft_use_that_shit(hex_address);
	free(hex_address);
	return (len);
}
