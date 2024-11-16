#include "tests.h"

void	run_tests_char(void)
{
	int x1, x2;
	
	printf("Test %i\n", 1);
	x1 = ft_printf("%c", '0');
	printf("\n");
	x2 = printf("%c", '0');
	printf("\n");
	printf("Output: %d std: %d\n", x1, x2);
	printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
	printf("//////////////////////\n\n");
	
	printf("Test %i\n", 2);
    x1 = ft_printf(" %c ", '0');
    printf("\n");
    x2 = printf(" %c ", '0');
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
	printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    printf("Test %i\n", 3);
    x1 = ft_printf(" %c", '0' - 256);
    printf("\n");
    x2 = printf(" %c", '0' - 256);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
	printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    printf("Test %i\n", 4);
    x1 = ft_printf("%c ", '0' + 256);
    printf("\n");
    x2 = printf("%c ", '0' + 256);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
	printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    printf("Test %i\n", 5);
    x1 = ft_printf(" %c %c %c ", '0', 0, '1');
    printf("\n");
    x2 = printf(" %c %c %c ", '0', 0, '1');
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
	printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    printf("Test %i\n", 6);
    x1 = ft_printf(" %c %c %c ", ' ', ' ', ' ');
    printf("\n");
    x2 = printf(" %c %c %c ", ' ', ' ', ' ');
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
	printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    printf("Test %i\n", 7);
    x1 = ft_printf(" %c %c %c ", '1', '2', '3');
    printf("\n");
    x2 = printf(" %c %c %c ", '1', '2', '3');
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
	printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    printf("Test %i\n", 8);
    x1 = ft_printf(" %c %c %c ", '2', '1', 0);
    printf("\n");
    x2 = printf(" %c %c %c ", '2', '1', 0);
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
	printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");

    printf("Test %i\n", 9);
    x1 = ft_printf(" %c %c %c ", 0, '1', '2');
    printf("\n");
    x2 = printf(" %c %c %c ", 0, '1', '2');
    printf("\n");
    printf("Output: %d std: %d\n", x1, x2);
	printf("%s\n", (x1 == x2) ? "OK!" : "KO!");
    printf("//////////////////////\n\n");
}
