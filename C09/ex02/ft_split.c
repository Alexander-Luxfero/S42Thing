#include <stdlib.h>
#include <stdio.h>

int count_substr(char *str, char *charset)
{
    int words;
    char *sub;

    words = 0;
    while (*str)
    {
        sub = charset;
        while (*str != *sub && *sub)
            str++;
        while (*str == *sub)
            sub++;
        if (!*sub)
            words++;
        str++;
    }
    return (words);
}

int len_counter(char *str, char *charset)
{
    int len;

    len = 0;
    while (str[len] != charset)
        len++;
    if (len != 0)
        len++;
    return (len);
}

char **ft_split(char *str, char *charset)
{
    int words;
    char *strinsert;
    int inwordc;
    char *substr_counter;
    int k; // For words

    k = 0;
    words = count_substr(str, charset);
    char **strings = malloc(sizeof(char *) * (words + 1));
    while (*str)
    {
        substr_counter = charset;
        strings[k] = malloc(sizeof(char) * 20);
        if (!strings[k])
            strings[k] = NULL;
        inwordc = 0;
        while (*str != *substr_counter)
        {
            *strings[k] = *str;
            str++;
            //strings[k]++;
        }
        while (*str == *substr_counter)
        {
            str++;
            substr_counter++;
        }
        printf("%s\n", strings[k]);
        if (!substr_counter)
            k++;
    }
    strings[words + 1] = NULL;
    return (strings);
}



int main(void)
{
    char **result = ft_split("hello world 42", " ");
    int i = 0;
    //printf("%d\n", count_substr("hello world 42, gold on the cillin", " "));
    while (result[i++] != NULL)
       printf("%s\n", result[--i]);
    return (0);
}