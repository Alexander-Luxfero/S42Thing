#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;
    int str_len;

    i = 1;
    while (i < argc)
    {
        str_len = 0;
        while (argv[argc - i][str_len] != '\0')
            str_len++;
        write(1, argv[argc - i], str_len);
        write(1, "\n", 1);
        i++;
    }    
    return (0);
}