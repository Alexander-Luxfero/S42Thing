#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' ))
        {
            return (1);
        }
        i++;
    } 
    return (0);
}
/*
//Test
int main(void)
{
    //If Ok print 0 first time and 1 second!
    char text[14] = "WhereIsTheWill";
    char new = ft_str_is_alpha(text) + '0';
    printf("If OK: %c \n", new);

    char text1[14] = "Where!s3heWill";
    char new1 = ft_str_is_alpha(text1) + '0';
    printf("If OK: %c \n", new1);
    return (0);
}
*/