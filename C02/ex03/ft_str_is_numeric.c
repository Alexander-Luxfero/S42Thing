#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
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
    char new = ft_str_is_numeric(text) + '0';
    printf("If OK 0 = %c \n", new);

    char text1[14] = "123";
    char new1 = ft_str_is_numeric(text1) + '0';
    printf("If OK 1 = %c \n", new1);
    return (0);
}
*/