unsigned int str_length(char *str) {
    unsigned int length = 0;
    while (str[length] != '\0')
        length++;
    return length;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
    unsigned int length_dest = str_length(dest);
    unsigned int length_src = str_length(src);
    unsigned int i = 0;

    if (size <= length_dest)
        return size + length_src;

    while (src[i] != '\0' && (length_dest + i) < (size - 1)) {
        dest[length_dest + i] = src[i];
        i++;
    }

    dest[length_dest + i] = '\0';
    return length_dest + length_src;
}

#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[50] = "String first, ";
    char str2[] = "concated with second, and this is gone.";
    char str3[50] = "String first, ";

    ft_strlcat(str1, str2, 36);
    strlcat(str3, str2, 36);
    printf("%s", strcmp(str1, str3) == 0 ? "OK!\n" : "KO!\n");
    printf("Custom result: %s|||END|||\n", str1);
    printf("Standart result: %s|||END|||\n", str3);
    return 0;
}
*/