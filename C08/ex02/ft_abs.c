#include "ft_abs.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        int i = 0;
        while (++i < argc)
        {
            int someint = atoi(argv[i]);
            printf("%d\n", ABS(someint));
        }
    }
    return (0);
}