
//Простые это те что леляться на 1 и сами на себя только.
// тогда возвращает 1, если нет  то 0

int ft_is_prime(int nb)
{
    int prime;
    int i;
    prime = 1;
    i = 2;
    if (nb == 1)
        prime += 1;
    while (i <= nb)
    {
        if (i == nb || nb%i == 0)
            prime++;
        i++;
    }
    if (prime == 2)
        return (1);
    return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int value = atoi(argv[1]);
        printf("%d\n", ft_is_prime(value));
        printf("%s\n", \
        (ft_is_prime(value) == 1) ? "Is prime" : "Is not prime");
    }
    return (0);
}
*/