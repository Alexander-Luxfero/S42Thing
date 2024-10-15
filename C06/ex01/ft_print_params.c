#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;
    int str_len;

    i = 0;
    while (++i < argc)
    {
        str_len = 0;
        while (argv[i][str_len] != '\0')
            str_len++;
        write(1, argv[i], str_len);
        write(1, "\n", 1);
    }    
    return (0);
}