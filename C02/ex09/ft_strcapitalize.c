#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i = 0;
    int first_char = 1;

    while (str[i] != '\0')
    {
        if (first_char != 0 && (str[i] >= 'a' && str[i] <= 'z')){
            str[i] = str[i] - 32;
            first_char = 0;
        } else if ( str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        } else if (str[i] == ' '){
            first_char = 1;
        }
        i++;
    } 
    return str;
}
/*
//Test
int main(void)
{
    //If Ok print 0 first time and 1 second!
    char text[18] = "wHere is tHe wiLl";
    ft_strcapitalize(text);
    printf("If OK: %s\n", text);
    return (0);
}
*/