#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
   unsigned int i = 0;
   unsigned int length = 0;

    while (src[length] != '\0')
        length++;

    if (size != 0)
    {
        while (src[i] != '\0' && i <= size )
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }

    return length++;
}
/*
//Test
int main(void)
{
    //If Ok print 0 first time and 1 second!
    char src[] = "Hello, World!";
    char dest[5];

    unsigned int length = ft_strlcpy(dest, src, 5);
    printf("New stringq: %s\n", dest);
    printf("Length of previous: %d\n", length);
    return (0);
}
*/