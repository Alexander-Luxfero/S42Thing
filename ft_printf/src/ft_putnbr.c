/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:45:53 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/15 23:45:53 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

size_t	ft_putnbr(int n)
{
	unsigned int	len;
	unsigned int	division;
	size_t			out_len;

	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	len = ft_num_len(n, 10);
	out_len = (size_t)len;
	if (n < 0)
	{
		write(1, "-", 1);
		len--;
		n = -n;
	}
	division = 1;
	while (--len > 0)
		division *= 10;
	while (division > 0)
	{
		ft_putchar(((unsigned int)n / division) + '0');
		n %= division;
		division /= 10;
	}
	return (out_len);
}
