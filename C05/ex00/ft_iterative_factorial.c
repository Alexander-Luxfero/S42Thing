int ft_iterative_factorial(int nb)
{
    int output;
    int i;

    i = 1;
    if (nb <= 0)
        return (0);
    if (nb >= 1)
    {
        output = 1;
        while (nb > i)
        {
            i++;
            output = output * i;
        }
    }
    return (output);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int value = atoi(argv[1]);
        printf("%d\n", ft_iterative_factorial(value));
    }
    return (0);
}
*/