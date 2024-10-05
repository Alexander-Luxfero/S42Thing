#include <unistd.h>

void putchar(char c) {
    write(1, &c, 1);
}

void convert_to_hex(unsigned char ch){
    char hex[] = "0123456789abcdef";
    putchar('\\');
    putchar(hex[ch / 16]);
    putchar(hex[ch % 16]);
}

void ft_putstr_non_printable(char *str){
    int i = 0;

    while (str[i] != '\0'){
        if (str[i] >= 32 && str[i] <= 126){
            putchar(str[i]);
        } else {
            convert_to_hex((unsigned char)str[i]);
        }
        i++;
    }
}
/*
//Test
int main(void){
    char text[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(text);
    return (0);
}
*/