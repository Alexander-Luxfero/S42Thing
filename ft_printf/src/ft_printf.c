/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:45:53 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/15 23:45:53 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

/**
 * @brief 
 * 
 * @param 
 */
size_t	print(char str, va_list ap)
{
	size_t	len;

	len = 0;
	if (str == 'c')
		len += ft_putchar((char) va_arg(ap, int));
	else if (str == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if (str == 'd' || str == 'i')
		len += ft_putnbr(va_arg(ap, int));
	else if (str == 'u')
		len += ft_putundec(va_arg(ap, unsigned int));
	else if (str == 'p')
		len += ft_print_pointer(va_arg(ap, void *));
	else if (str == 'x')
		len += ft_puthex(va_arg(ap, int), 0);
	else if (str == 'X')
		len += ft_puthex(va_arg(ap, int), 1);
	else if (str == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	size_t	i;
	size_t	len;

	va_start(list, str);
	i = 0;
	len = 0;
	while (*str)
	{
		if (str[i] == '%')
			len += print(*(++str), list);
		else
			len += ft_putchar(*str);
		str++;
	}
	va_end(list);
	return ((int)(len));
}

