
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i] && i < n) {
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
    char str4[] = "string not the same ";
    char str5[] = "string another one";

    printf("%s", (ft_strncmp(str1, str2, 7) == strncmp(str1, str2, 7)) ? "OK!\n" : "KO!\n");
    printf("%s", (ft_strncmp(str4, str5, 6) == strncmp(str4, str5, 6)) ? "OK!\n" : "KO!\n");
    printf("%s", (ft_strncmp(str1, str2, 20) == strncmp(str1, str2, 20)) ? "OK!\n" : "KO!\n");

    printf("%s", (ft_strncmp(str5, str4, 15) == strncmp(str5, str4, 15)) ? "OK!\n" : "KO!\n");
    printf("%s", (ft_strncmp(str1, str3, 3) == strncmp(str1, str3, 3)) ? "OK!\n" : "KO!\n");
    printf("%s", (ft_strncmp(str3, str2, 5) == strncmp(str3, str2, 5)) ? "OK!\n" : "KO!\n");
    return (0);
}
*/