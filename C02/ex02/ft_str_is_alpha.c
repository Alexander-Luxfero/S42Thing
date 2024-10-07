#include <stdio.h>

int is_alpha(char c, int start)
{
    if (c >= start && c <= start + 26)
    {
        return (1);
    }
    return (0);
}

int ft_str_is_alpha(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (!(is_alpha(str[i], 97) || is_alpha(str[i], 65) ))
        {
            return (0);
        }
        i++;
    } 
    return (1);
}
/*
//Test
int main(void)
{
    //If Ok print 0 first time and 1 second!
    char text[14] = "WhereIsTheWill";
    int new = ft_str_is_alpha(text);
    printf("%s\n", new == 1 ? "OK!" : "KO!");

    char text1[14] = "Where!s3heWill";
    int new1 = ft_str_is_alpha(text1);
    printf("%s\n", new1 == 0 ? "OK!" : "KO!");
    return (0);
}
*/