#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++; 
    }
    dest[i] = '\0';
    return (dest);
}
/*
#include <stdio.h>
#include <string.h>
//Test
int main(void)
{
    char text[] = "Where is the will, there is the way.";
    char new[40];
    char new1[40];

    ft_strncpy(new, text, 20);
    strncpy(new1, text, 20);

    printf("%s\n", new);
    printf("%s\n", new1);
    printf("%s\n", strcmp(new, new1) == 0 ? "OK!" : "KO!");
    return (0);
}
*/