#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int i = 0;
    
    while (str[i] != '\0')
    {
        if ( str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    } 
    return str;
}
/*
//Test
int main(void)
{
    //If Ok print 0 first time and 1 second!
    char text[18] = "Where Is the Will";
    ft_strlowcase(text);
    printf("If OK: %s\n", text);
    return (0);
}
*/