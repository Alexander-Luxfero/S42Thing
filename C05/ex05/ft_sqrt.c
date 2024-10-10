int ft_sqrt(int nb)
{
    int i;
    if (nb > 0)
    {
        i = 1;
        while (i*i < nb + 1)
        {
            if (i*i == nb)
                return (i);
            i++;
            if (i*i > nb)
                return (i-1);
        }
    }
    return (0);
}
/*
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int value = atoi(argv[1]);
        printf("%d\n", ft_sqrt(value));
        printf("%d\n", (int)sqrt(value));
        printf("%s\n", \
        (ft_sqrt(value) == (int)sqrt(value)) ? \
        "OK!" : "KO!");
    }
    return (0);
}
*/