int ft_recursiv_factorial(int n)
{
    if (n <= 0)
        return (0);
    if (n > 1)
        return (n * ft_recursiv_factorial(n-1));
    return (1);
}

#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_recursiv_factorial(-2));
    return (0);
}