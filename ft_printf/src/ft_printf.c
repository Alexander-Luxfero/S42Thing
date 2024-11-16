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

size_t	print(char specifier, va_list *ap)
{
	size_t	len;

	len = 0;
	if (specifier == 'c')
		len += ft_putchar((char) va_arg(*ap, int));
	else if (specifier == 's')
		len += ft_putstr((char *)va_arg(*ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		len += ft_putnbr(va_arg(*ap, int));
	else if (specifier == 'p')
		len += ft_print_pointer(va_arg(*ap, void *));
	else if (specifier == '%')
		len += ft_putchar('%');
	else if (specifier == 'u')
		len += ft_putbase(va_arg(*ap, unsigned int), 0, 10);
	else if (specifier == 'x')
		len += ft_putbase(va_arg(*ap, int), 0, 16);
	else if (specifier == 'X')
		len += ft_putbase(va_arg(*ap, int), 1, 16);
	
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	size_t	len;

	va_start(list, str);
	len = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str)
				len += print(*str, &list);
			else
				break ;
		}
		else
			len += ft_putchar(*str);
		str++;
	}
	va_end(list);
	return ((int)(len));
}

// #include <stdio.h>
// int main()
// {
// 	printf("\nstd: %p \n", 0);
// 	ft_printf("custom: %p \n", 0);

// 	printf("\nstd: %p \n", NULL);
// 	ft_printf("custom: %p \n", NULL);
// 	return (0);
// }