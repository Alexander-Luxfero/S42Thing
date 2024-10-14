
//Простые это те что леляться на 1 и сами на себя только.
// тогда возвращает 1, если нет  то 0

int ft_is_prime(int nb)
{
    int i;
    
    i = 2;
    if (nb <= 1)
        return (0);
    while (i < nb)
    {
        if (nb%i == 0)
            return (0);
        i++;
    }
    return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>
//1,2,3,5,7,11,13,17,19 
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