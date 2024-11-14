/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putundec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:39:31 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/14 11:40:16 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putundec(unsigned int n)
{
	unsigned int	len;
	unsigned int	division;
	char			c;
	size_t			out_len;

	len = ft_num_len(n, 10);
	out_len = (size_t)len;
	division = 1;
	while (--len > 0)
		division *= 10;
	while (division > 0)
	{
		c = (n / division) + '0';
		write(1, &c, 1);
		n %= division;
		division /= 10;
	}
	return (out_len);
}
