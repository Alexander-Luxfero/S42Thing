/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 01:13:32 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/14 14:52:48 by akuzmin          ###   ########.fr       */
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
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
				len += ft_putchar((char) va_arg(ap, int));
			else if (str[i] == 's')
				len += ft_putstr(va_arg(ap, char *));
			else if (str[i] == 'd' || str[i] == 'i')
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
#include <limits.h>

// void run_tests_decimal(void) {
//     int x1, x2;

//     // Test 1
//     printf("Test %i\n", 1);
//     x1 = ft_printf(" %d ", 0);
//     printf("\n");
//     x2 = printf(" %d ", 0);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 2
//     printf("Test %i\n", 2);
//     x1 = ft_printf(" %d ", -1);
//     printf("\n");
//     x2 = printf(" %d ", -1);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 3
//     printf("Test %i\n", 3);
//     x1 = ft_printf(" %d ", 1);
//     printf("\n");
//     x2 = printf(" %d ", 1);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 4
//     printf("Test %i\n", 4);
//     x1 = ft_printf(" %d ", 9);
//     printf("\n");
//     x2 = printf(" %d ", 9);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 5
//     printf("Test %i\n", 5);
//     x1 = ft_printf(" %d ", 10);
//     printf("\n");
//     x2 = printf(" %d ", 10);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 6
//     printf("Test %i\n", 6);
//     x1 = ft_printf(" %d ", 11);
//     printf("\n");
//     x2 = printf(" %d ", 11);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 7
//     printf("Test %i\n", 7);
//     x1 = ft_printf(" %d ", 15);
//     printf("\n");
//     x2 = printf(" %d ", 15);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 8
//     printf("Test %i\n", 8);
//     x1 = ft_printf(" %d ", 16);
//     printf("\n");
//     x2 = printf(" %d ", 16);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 9
//     printf("Test %i\n", 9);
//     x1 = ft_printf(" %d ", 17);
//     printf("\n");
//     x2 = printf(" %d ", 17);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 10
//     printf("Test %i\n", 10);
//     x1 = ft_printf(" %d ", 99);
//     printf("\n");
//     x2 = printf(" %d ", 99);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 11
//     printf("Test %i\n", 11);
//     x1 = ft_printf(" %d ", 100);
//     printf("\n");
//     x2 = printf(" %d ", 100);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 12
//     printf("Test %i\n", 12);
//     x1 = ft_printf(" %d ", 101);
//     printf("\n");
//     x2 = printf(" %d ", 101);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 13
//     printf("Test %i\n", 13);
//     x1 = ft_printf(" %d ", -9);
//     printf("\n");
//     x2 = printf(" %d ", -9);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 14
//     printf("Test %i\n", 14);
//     x1 = ft_printf(" %d ", -10);
//     printf("\n");
//     x2 = printf(" %d ", -10);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 15
//     printf("Test %i\n", 15);
//     x1 = ft_printf(" %d ", -11);
//     printf("\n");
//     x2 = printf(" %d ", -11);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 16
//     printf("Test %i\n", 16);
//     x1 = ft_printf(" %d ", -14);
//     printf("\n");
//     x2 = printf(" %d ", -14);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 17
//     printf("Test %i\n", 17);
//     x1 = ft_printf(" %d ", -15);
//     printf("\n");
//     x2 = printf(" %d ", -15);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 18
//     printf("Test %i\n", 18);
//     x1 = ft_printf(" %d ", -16);
//     printf("\n");
//     x2 = printf(" %d ", -16);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 19
//     printf("Test %i\n", 19);
//     x1 = ft_printf(" %d ", -99);
//     printf("\n");
//     x2 = printf(" %d ", -99);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 20
//     printf("Test %i\n", 20);
//     x1 = ft_printf(" %d ", -100);
//     printf("\n");
//     x2 = printf(" %d ", -100);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 21
//     printf("Test %i\n", 21);
//     x1 = ft_printf(" %d ", -101);
//     printf("\n");
//     x2 = printf(" %d ", -101);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 22
//     printf("Test %i\n", 22);
//     x1 = ft_printf(" %d ", INT_MAX);
//     printf("\n");
//     x2 = printf(" %d ", INT_MAX);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 23
//     printf("Test %i\n", 23);
//     x1 = ft_printf(" %d ", INT_MIN);
//     printf("\n");
//     x2 = printf(" %d ", INT_MIN);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 24
//     printf("Test %i\n", 24);
//     x1 = ft_printf(" %d ", LONG_MAX);
//     printf("\n");
//     x2 = printf(" %d ", LONG_MAX);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 25
//     printf("Test %i\n", 25);
//     x1 = ft_printf(" %d ", LONG_MIN);
//     printf("\n");
//     x2 = printf(" %d ", LONG_MIN);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 26
//     printf("Test %i\n", 26);
//     x1 = ft_printf(" %d ", UINT_MAX);
//     printf("\n");
//     x2 = printf(" %d ", UINT_MAX);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 27
//     printf("Test %i\n", 27);
//     x1 = ft_printf(" %d ", ULONG_MAX);
//     printf("\n");
//     x2 = printf(" %d ", ULONG_MAX);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 28
//     printf("Test %i\n", 28);
//     x1 = ft_printf(" %d ", 9223372036854775807LL);
//     printf("\n");
//     x2 = printf(" %d ", 9223372036854775807LL);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     // Test 29
//     printf("Test %i\n", 29);
//     x1 = ft_printf(" %d %d %d %d %d %d %d", INT_MAX,\
//     INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
//     printf("\n");
//     x2 = printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN,\ 
//     LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
//     printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");
// }

// void	run_tests_char(void)
// {
// 	int x1, x2;
	
// 	printf("Test %i\n", 1);
// 	x1 = ft_printf("%c", '0');
// 	printf("\n");
// 	x2 = printf("%c", '0');
// 	printf("\n");
// 	printf("Output: %d std: %d\n", x1, x2);
// 	printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
// 	printf("//////////////////////\n\n");
	
// 	printf("Test %i\n", 2);
//     x1 = ft_printf(" %c ", '0');
//     printf("\n");
//     x2 = printf(" %c ", '0');
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
// 	printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     printf("Test %i\n", 3);
//     x1 = ft_printf(" %c", '0' - 256);
//     printf("\n");
//     x2 = printf(" %c", '0' - 256);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
// 	printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     printf("Test %i\n", 4);
//     x1 = ft_printf("%c ", '0' + 256);
//     printf("\n");
//     x2 = printf("%c ", '0' + 256);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
// 	printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     printf("Test %i\n", 5);
//     x1 = ft_printf(" %c %c %c ", '0', 0, '1');
//     printf("\n");
//     x2 = printf(" %c %c %c ", '0', 0, '1');
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
// 	printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     printf("Test %i\n", 6);
//     x1 = ft_printf(" %c %c %c ", ' ', ' ', ' ');
//     printf("\n");
//     x2 = printf(" %c %c %c ", ' ', ' ', ' ');
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
// 	printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     printf("Test %i\n", 7);
//     x1 = ft_printf(" %c %c %c ", '1', '2', '3');
//     printf("\n");
//     x2 = printf(" %c %c %c ", '1', '2', '3');
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
// 	printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     printf("Test %i\n", 8);
//     x1 = ft_printf(" %c %c %c ", '2', '1', 0);
//     printf("\n");
//     x2 = printf(" %c %c %c ", '2', '1', 0);
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
// 	printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");

//     printf("Test %i\n", 9);
//     x1 = ft_printf(" %c %c %c ", 0, '1', '2');
//     printf("\n");
//     x2 = printf(" %c %c %c ", 0, '1', '2');
//     printf("\n");
//     printf("Output: %d std: %d\n", x1, x2);
// 	printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
//     printf("//////////////////////\n\n");
// }

void run_pointer_tests() {
    int x1, x2;

    // Test 1
    printf("Test %i\n", 1);
    x2 = printf("STD: %p ", (void*)(-1));
    printf("\n");
    x1 = ft_printf("CUS: %p ", (void*)(-1));
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 2
    printf("Test %i\n", 2);
    x2 = printf("STD: %p ", (void*)1);
    printf("\n");
    x1 = ft_printf("CUS: %p ", (void*)1);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 3
    printf("Test %i\n", 3);
    x2 = printf("STD: %p ", (void*)15);
    printf("\n");
    x1 = ft_printf("CUS: %p ", (void*)15);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 4
    printf("Test %i\n", 4);
    x2 = printf("STD: %p ", (void*)16);
    printf("\n");
    x1 = ft_printf("CUS: %p ", (void*)16);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 5
    printf("Test %i\n", 5);
    x2 = printf("STD: %p ", (void*)17);
    printf("\n");
    x1 = ft_printf("CUS: %p ", (void*)17);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 6
    printf("Test %i\n", 6);
    x2 = printf("STD: %p %p ", (void*)LONG_MIN, (void*)LONG_MAX);
    printf("\n");
    x1 = ft_printf("CUS: %p %p ", (void*)LONG_MIN, (void*)LONG_MAX);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 7
    printf("Test %i\n", 7);
    x2 = printf("STD: %p %p ", (void*)INT_MIN, (void*)INT_MAX);
    printf("\n");
    x1 = ft_printf("CUS: %p %p ", (void*)INT_MIN, (void*)INT_MAX);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 8
    printf("Test %i\n", 8);
    x2 = printf("STD: %p %p ", (void*)ULONG_MAX, (void*)(-ULONG_MAX));
    printf("\n");
    x1 = ft_printf("CUS: %p %p ", (void*)ULONG_MAX, (void*)(-ULONG_MAX));
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 9
    printf("Test %i\n", 9);
    x2 = printf("STD: %p %p ", (void*)0, (void*)0);
    printf("\n");
    x1 = ft_printf("CUS: %p %p ", (void*)0, (void*)0);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");
}

int main() {

	// My random test!
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
	// 	\nPointer: %p \nUnsigned decimal: %u \nIn hex lower: %x \
	//  \nIn HEX upper: %X \nPercent sign: %%\n", i, decimal, str[0], str,\
	// 	str, undec, decimal, decimal);
	// 	printf("/////////////////////////\nlength writen: %d\n\n", len1);

	// 	len2 = ft_printf("Test(integer) %i\nDecimal: %d\nChar: %c\nString: %s\
	// 	\nPointer: %p \nUnsigned decimal: %u \nIn hex lower: %x \
	//  \nIn HEX upper: %X \nPercent sign: %%\n", i, decimal, str[0], str,\
	// 	str, undec, decimal, decimal);
	// 	ft_printf("/////////////////////////\nlength writen: %d\n\n", len2);
	// 	i++;
	// }
	//
	
	// Also in progress
	//run_tests_char();
	//run_tests_decimal();
	run_pointer_tests();

    return 0;
}
*/