
int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i]) {
            if (s1[i] - s2[i] > 0) {
                return (-1);
            } else {
                return (1);
            }
        }  
        i++;
    }
    return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "String";
    char str2[] = "String";
    char str3[] = "string";
    printf("%s", (ft_strcmp(str1, str2) == strcmp(str1, str2)) ? "OK!\n" : "KO!\n");
    printf("%s", (ft_strcmp(str1, str3) == strcmp(str1, str3)) ? "OK!\n" : "KO!\n");
    printf("%s", (ft_strcmp(str3, str1) == strcmp(str3, str1)) ? "OK!\n" : "KO!\n");
    return (0);
}
*/