#include <unistd.h>

void convert_to_hex(unsigned char ch)
{
    write( 1, &"0123456789abcdef"[ch / 16], 1);
    write( 1, &"0123456789abcdef"[ch % 16], 1);
}

void    hex_address(unsigned long address)
{
    int k;

    k = 15;
    while (k >= 0) {
        write( 1, &"0123456789abcdef"[(address >> (4 * k)) & 0xf], 1);
        k--;
    }
    write(1, ": ", 2);
}

void    print_data(unsigned int i, unsigned int size, char *addr, int is_hex)
{
    unsigned int j = 0;

    if (is_hex)
    {
        while (j < 16)
        {
            if (i + j < size) {
                convert_to_hex(((unsigned char *)addr)[i + j]);
            } else {
                write(1, "  ", 2);
            }
            if (j % 2 == 1) {
                write(1, " ", 1);
            }
            j++;
        }
    } else {
        while ( j < 16 && (i + j < size))
        {
            unsigned char c = ((unsigned char *)addr)[i + j];
            if (c >= 32 && c <= 126) {
                write(1, &c, 1);
            } else {
                write( 1, ".", 1);
            }
            j++;
        }
    }
    
}

void ft_print_memory(void *addr, unsigned int size) {
    unsigned int i = 0;

    while (i < size) {
        // Print address
        unsigned long address = (unsigned long)(addr + i);
        hex_address(address);

        // Print data in hex format
        print_data(i, size, addr, 1);

        print_data(i, size, addr, 0);
        
        write( 1, "\n", 1);
        i += 16;
    }
}
/*
//Test
int main(void) {
    char str[] = "Bonjour les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec...";
    ft_print_memory(str, 67); 
    return 0;
}
*/