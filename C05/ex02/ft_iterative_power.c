int ft_iterative_power(int nb, int power)
{
    int output;
    int i;

    i = 1;
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    if (power >= 1)
    {
        output = nb;
        while (power > i)
        {
            output *= nb;
            i++;
        }
    }
    return (output);
}
/*
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 3)
    {
        int value = atoi(argv[1]);
        int power = atoi(argv[2]);
        printf("%d\n", ft_iterative_power(value, power));
        printf("%d\n", (int)pow(value, power));
        printf("%s\n", \
        (ft_iterative_power(value, power) == pow(value, power)) ? \
        "OK!" : "KO!");
    }
    return (0);
}
*/