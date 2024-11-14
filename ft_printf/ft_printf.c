/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 01:13:32 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/13 21:18:22 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	size_t	i;
	size_t	len;

	va_start(ap, str);
	i = 0;
	len = 0;
	// if (str[0] != '\0')
	// 	len++;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
				len += ft_putchar((char) va_arg(ap, int));
			else if (str[i] == 's')
				len += ft_putstr(va_arg(ap, char *));
			else if (str[i] == 'd')
				len += ft_putnbr(va_arg(ap, int));
			else if (str[i] == 'i')
				len += ft_putnbr(va_arg(ap, int));
			else if (str[i] == 'u')
				len += ft_putundec(va_arg(ap, unsigned int));
			else if (str[i] == 'p')
				len += ft_print_pointer(va_arg(ap, void *));
			else if (str[i] == 'x')
				len += ft_puthex(va_arg(ap, int), 0);
			else if (str[i] == 'X')
				len += ft_puthex(va_arg(ap, int), 1);
			else if (str[i] == '%')
				len += ft_putchar('%');
		}
		else
		{
			len += ft_putchar(str[i]);
		}
		i++;
	}
	va_end(ap);
	return ((int)(len));
}

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    // int decimal;
	// unsigned int undec;
	// int minus;
	// int i = 1;
	// int len1, len2;
	// char *str = "Some randome string!";
	// while (i < 2)
	// {
	// 	minus = (rand() % 2) ? -1 : 1;
	// 	decimal = minus * (rand() % 2000000);
	// 	undec = rand() % 4000000000;
	// 	len1 = printf("Test(integer) %i\nDecimal: %d\nChar: %c \nString: %s \
	// 	\nPointer: %p \nUnsigned decimal: %u \nIn hex lower: %x \nIn HEX upper: \
	// 	%X \nPercent sign: %%\n", i, decimal, str[0], str, str, \
	// 	undec, decimal, decimal);
	// 	printf("/////////////////////////\nlength writen: %d\n\n", len1);

	// 	len2 = ft_printf("Test(integer) %i\nDecimal: %d\nChar: %c \nString: %s \
	// 	\nPointer: %p \nUnsigned decimal: %u \nIn hex lower: %x \nIn HEX upper: \
	// 	%X \nPercent sign: %%\n", i, decimal, str[0], str, str, \
	// 	undec, decimal, decimal);
	// 	printf("/////////////////////////\nlength writen: %d\n\n", len2);
	// 	i++;
	// }
	printf("output: %d std: %d\n" , ft_printf(" %c %c %c \n", '0', 0, '1'), printf(" %c %c %c \n", '0', 0, '1'));
	printf("output: %d std: %d\n" , ft_printf(" %c %c %c \n", '2', '1', 0), printf(" %c %c %c \n", '2', '1', 0));
	printf("output: %d std: %d\n" , ft_printf(" %c %c %c \n", 0, '1', '2'), printf(" %c %c %c \n", 0, '1', '2'));
    return 0;
}
*/