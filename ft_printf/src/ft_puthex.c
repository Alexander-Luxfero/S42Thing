/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:39:31 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/15 11:57:34 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_puthex(int n, int uppercase)
{
	unsigned int	len;
	unsigned int	division;
	unsigned int	num;
	char			*hex_chars;
	size_t			out_len;

	if (uppercase)
		hex_chars = "0123456789ABCDEF";
	else
		hex_chars = "0123456789abcdef";
	if (n == -2147483648)
		return (ft_putstr("80000000"));
	num = (unsigned int)(n);
	len = ft_num_len(num, 16);
	out_len = (size_t)len;
	division = 1;
	while (--len > 0)
		division *= 16;
	while (division > 0)
	{
		write(1, &hex_chars[num / division], 1);
		num %= division;
		division /= 16;
	}
	return (out_len);
}
