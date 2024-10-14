int ft_recursive_factorial(int nb)
{
    int out;

    if (nb <= 0)
        return (0);
    out = 1;
    if (nb > 1)
        out = nb * ft_recursiv_factorial(nb-1);
    return (out);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int value = atoi(argv[1]);
        printf("%d\n", ft_recursive_factorial(value));
    }
    return (0);
}
*/