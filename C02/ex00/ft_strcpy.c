
char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
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

    ft_strcpy(new, text);
    strcpy(new1, text);

    printf("%s\n", new);
    printf("%s\n", new1);
    printf("%s\n", strcmp(new, new1) == 0 ? "OK!" : "KO!");
    return (0);
}
*/