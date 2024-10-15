#include <unistd.h>

void print_argument(char *str[])
{
    int str_len;

    str_len = 0;
    while (str[str_len] != '\0')
        str_len++;
    write(1, str, str_len);
    write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
    int i;
    

    i = 0;
    while (++i < argc)
    {
        
    }    
    return (0);
}