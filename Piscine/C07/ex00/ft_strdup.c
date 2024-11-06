
#include <stdlib.h>

char *ft_strdup(char *src)
{
    char *copy;
    int length;
    int i;

    length = 0;
    while (src[length])
        length++;
    copy = malloc((length + 1) * sizeof(char));
    if (!copy)
        return (NULL);
    i = -1;
    while (++i < length)
        copy[i] = src[i];
    copy[i] = '\0';
    return (copy);
}
/*
#include <stdio.h>

int main(void)
{
    char str[] = "String for cop";
    char *copy = ft_strdup(str);
    printf("\n\n///////////////////////////////////////////\n");
    printf("Original: %s\nCopy: %s\nPointer: %p\n", str, copy, copy);
    if (!copy)
        return (0);
    free(copy);

    char str1[] = "";
    char *copy1 = ft_strdup(str1);
    printf("\n\n///////////////////////////////////////////\n");
    printf("Original: %s\nCopy: %s\nPointer: %p\n", str1, copy1, copy1);
    if (!copy1)
        return (0);
    free(copy1);

    return (0);
}
*/