//Ищем to_find в основной строке str, если нет то вернём NULL
char *ft_strstr(char *str, char *to_find)
{   
    if (!*to_find) 
        return (char *)str; 

    while (*str)
    {
        char *cont_str = str;
        char *cont_find = to_find;
        //If exist cont str&find and find in str, go thrue before end of this part
        while (*cont_str && *cont_find && *cont_find == *cont_str)
        {
            cont_str++;
            cont_find++;
        }
        
        if (!*cont_find) 
            return (char *)str;

        str++;
    }
    return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[36] = "Hello, and welcome to code!";
    char str2[] = "code";
    char str3[] = "togle";

    char *result1 = ft_strstr(str1, str2);
    char *result2 = strstr(str1, str2);
    char *result3 = ft_strstr(str1, str3);
    char *result4 = strstr(str1, str3);
    
    printf("%s", result1 == result2 ? "OK!\n" : "KO!\n");
    printf("%s", result3 == result4 ? "OK!\n" : "KO!\n");
    return (0);
}
*/