
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

int ft_find_next_prime(int nb)
{
    int prime;

    if (nb == 1)
        prime = 1;
    while (prime < 1)
    {
        if (ft_is_prime(nb) == 1)
            prime = nb;
        else
            prime = ft_find_next_prime(nb + 1);
    }
    return (prime);
}

#include <stdio.h>
#include <stdlib.h>
//Простые это те что леляться на 1 и сами на себя только.
// тогда возвращает 1, если нет  то 0
//1,2,3,5,7,11,13,17,19 
int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int value = atoi(argv[1]);
        printf("%d\n", ft_find_next_prime(value));
    }
    return (0);
}
