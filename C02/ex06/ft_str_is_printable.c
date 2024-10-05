#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i = 0;

    if (str[i] == '\0')
        return (1);

    while (str[i] != '\0')
    {
        if ( str[i] < 32 || str[i] > 126)
            return (0);
        i++;
    } 
    return (1);
}
/*
//Test
int main(void)
{
    //If Ok print 0 first time and 1 second!
    char text[3] = {2, 5, 30};
    char new = ft_str_is_printable(text) + '0';
    printf("If OK 0 = %c \n", new);

    char text1[5] = "rettt";
    char new1 = ft_str_is_printable(text1) + '0';
    printf("If OK 1 = %c \n", new1);
    return (0);
}
*/