#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++; 
    }
    while (*src != '\0')
    {
        dest[i] = '\0';
        i++; 
    }
    return dest;
}
/*
//Test
int main(void)
{
    char text[36] = "Where is the will, there is the way.";
    char new[25];
    ft_strncpy(new, text, 24);
    printf("If OK: %s", new);
    return (0);
}
*/