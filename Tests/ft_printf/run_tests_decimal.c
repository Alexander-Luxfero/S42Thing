#include "tests.h"

void run_tests_decimal(void) {
    int x1, x2;

    // Test 1
    printf("Test %i\n", 1);
    x1 = ft_printf(" %d ", 0);
    printf("\n");
    x2 = printf(" %d ", 0);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 2
    printf("Test %i\n", 2);
    x1 = ft_printf(" %d ", -1);
    printf("\n");
    x2 = printf(" %d ", -1);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 3
    printf("Test %i\n", 3);
    x1 = ft_printf(" %d ", 1);
    printf("\n");
    x2 = printf(" %d ", 1);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 4
    printf("Test %i\n", 4);
    x1 = ft_printf(" %d ", 9);
    printf("\n");
    x2 = printf(" %d ", 9);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 5
    printf("Test %i\n", 5);
    x1 = ft_printf(" %d ", 10);
    printf("\n");
    x2 = printf(" %d ", 10);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 6
    printf("Test %i\n", 6);
    x1 = ft_printf(" %d ", 11);
    printf("\n");
    x2 = printf(" %d ", 11);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 7
    printf("Test %i\n", 7);
    x1 = ft_printf(" %d ", 15);
    printf("\n");
    x2 = printf(" %d ", 15);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 8
    printf("Test %i\n", 8);
    x1 = ft_printf(" %d ", 16);
    printf("\n");
    x2 = printf(" %d ", 16);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 9
    printf("Test %i\n", 9);
    x1 = ft_printf(" %d ", 17);
    printf("\n");
    x2 = printf(" %d ", 17);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 10
    printf("Test %i\n", 10);
    x1 = ft_printf(" %d ", 99);
    printf("\n");
    x2 = printf(" %d ", 99);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 11
    printf("Test %i\n", 11);
    x1 = ft_printf(" %d ", 100);
    printf("\n");
    x2 = printf(" %d ", 100);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 12
    printf("Test %i\n", 12);
    x1 = ft_printf(" %d ", 101);
    printf("\n");
    x2 = printf(" %d ", 101);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 13
    printf("Test %i\n", 13);
    x1 = ft_printf(" %d ", -9);
    printf("\n");
    x2 = printf(" %d ", -9);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 14
    printf("Test %i\n", 14);
    x1 = ft_printf(" %d ", -10);
    printf("\n");
    x2 = printf(" %d ", -10);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 15
    printf("Test %i\n", 15);
    x1 = ft_printf(" %d ", -11);
    printf("\n");
    x2 = printf(" %d ", -11);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 16
    printf("Test %i\n", 16);
    x1 = ft_printf(" %d ", -14);
    printf("\n");
    x2 = printf(" %d ", -14);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 17
    printf("Test %i\n", 17);
    x1 = ft_printf(" %d ", -15);
    printf("\n");
    x2 = printf(" %d ", -15);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 18
    printf("Test %i\n", 18);
    x1 = ft_printf(" %d ", -16);
    printf("\n");
    x2 = printf(" %d ", -16);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 19
    printf("Test %i\n", 19);
    x1 = ft_printf(" %d ", -99);
    printf("\n");
    x2 = printf(" %d ", -99);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 20
    printf("Test %i\n", 20);
    x1 = ft_printf(" %d ", -100);
    printf("\n");
    x2 = printf(" %d ", -100);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 21
    printf("Test %i\n", 21);
    x1 = ft_printf(" %d ", -101);
    printf("\n");
    x2 = printf(" %d ", -101);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 22
    printf("Test %i\n", 22);
    x1 = ft_printf(" %d ", INT_MAX);
    printf("\n");
    x2 = printf(" %d ", INT_MAX);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 23
    printf("Test %i\n", 23);
    x1 = ft_printf(" %d ", INT_MIN);
    printf("\n");
    x2 = printf(" %d ", INT_MIN);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 24
    printf("Test %i\n", 24);
    x1 = ft_printf(" %d ", LONG_MAX);
    printf("\n");
    x2 = printf(" %d ", LONG_MAX);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 25
    printf("Test %i\n", 25);
    x1 = ft_printf(" %d ", LONG_MIN);
    printf("\n");
    x2 = printf(" %d ", LONG_MIN);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 26
    printf("Test %i\n", 26);
    x1 = ft_printf(" %d ", UINT_MAX);
    printf("\n");
    x2 = printf(" %d ", UINT_MAX);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 27
    printf("Test %i\n", 27);
    x1 = ft_printf(" %d ", ULONG_MAX);
    printf("\n");
    x2 = printf(" %d ", ULONG_MAX);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 28
    printf("Test %i\n", 28);
    x1 = ft_printf(" %d ", 9223372036854775807LL);
    printf("\n");
    x2 = printf(" %d ", 9223372036854775807LL);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    // Test 29
    printf("Test %i\n", 29);
    x1 = ft_printf(" %d %d %d %d %d %d %d", INT_MAX,\
    INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    printf("\n");
    x2 = printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, 
    LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
    printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");
}
