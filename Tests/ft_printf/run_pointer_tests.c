/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_pointer_tests.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:57:35 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/15 12:01:17 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

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
