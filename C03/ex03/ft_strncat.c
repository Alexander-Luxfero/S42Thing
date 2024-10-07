
char *ft_strncat(char *dest, char *src, unsigned int nb)
{   
    unsigned int length_str1;
    unsigned int i;
    
    length_str1 = 0;
    while (dest[length_str1] != '\0')
        length_str1++;

    i = 0;
    while (i < nb)
    {
        dest[length_str1 + i] = src[i];
        i++;
    }
    dest[length_str1+i] = '\0';

    return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[36] = "String first, ";
    char str2[] = "concated with second";
    char str3[36] = "String first, ";
    ft_strncat(str1, str2, 8);
    strncat(str3, str2, 8);
    
    printf("%s", strcmp(str1, str3) == 0 ? "OK!\n" : "KO!\n");

    return (0);
}
*/