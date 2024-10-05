#include <unistd.h>

void putchar(char c) {
    write(1, &c, 1);
}

void convert_to_hex(unsigned char ch) {
    char hex[] = "0123456789abcdef";
    putchar(hex[ch / 16]);
    putchar(hex[ch % 16]);
}

void ft_print_memory(void *addr, unsigned int size) {
    unsigned int i = 0;

    while (i < size) {
        // Print address
        unsigned long address = (unsigned long)(addr + i);
        for (int k = 15; k >= 0; k--) {
            putchar("0123456789abcdef"[(address >> (4 * k)) & 0xf]);
        }
        putchar(':');
        putchar(' ');
        // Print data in hex format
        for (unsigned int j = 0; j < 16; j++) {
            if (i + j < size) {
                convert_to_hex(((unsigned char *)addr)[i + j]);
            } else {
                putchar(' ');
                putchar(' ');
            }
            if (j % 2 == 1) {
                putchar(' ');
            }
        }
        for (unsigned int j = 0; j < 16 && (i + j < size); j++) {
            unsigned char c = ((unsigned char *)addr)[i + j];
            if (c >= 32 && c <= 126) {
                putchar(c);
            } else {
                putchar('.');
            }
        }
        putchar('\n');
        i += 16;
    }
}
/*
//Test
int len_of_str(char *string) {
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }
    return length;
}

int main(void) {
    char str[] = "Bonjour les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec...";
    ft_print_memory(str, len_of_str(str)); 
    return 0;
}
*/