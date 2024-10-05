#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
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
    char new = ft_str_is_lowercase(text) + '0';
    printf("If OK 0 = %c \n", new);

    char text1[14] = "whereisthewill";
    char new1 = ft_str_is_lowercase(text1) + '0';
    printf("If OK 1 = %c \n", new1);
    return (0);
}
*/