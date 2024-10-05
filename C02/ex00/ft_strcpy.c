#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (*src != '\0')
    {
        dest[i] = *src;
        src++;
        i++;
    }
    return dest;
}
/*
Test
int main(void)
{
    char text[36] = "Where is the will, there is the way.";
    char new[36];
    ft_strcpy(new, text);
    printf("If OK, here will be answer: %s", new);
    return (0);
}
*/