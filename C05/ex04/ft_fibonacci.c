int ft_fibonacci(int index)
{
    int i;
    if (index < 0)
        return (-1);
    int out[index];
    i = 0;
    while (i <= 1)
    {
        out[i] = i;
        i++;
    }
    if (index > 1)
    {
        while (i <= index)
        {
            out[i] = out[i-1] + out[i-2];
            i++;
        }
    }
    return (out[index]);
}
/*
#include <stdio.h>
#include <stdlib.h>
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377
int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int index = atoi(argv[1]);
        printf("%d\n", ft_fibonacci(index));
    }
    return (0);
}
*/