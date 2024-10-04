#include <unistd.h>
/*
Эта функция делит параметры a на b. 
Результат этого деления сохраняется в int, на который указывает a. 
Остаток деления сохраняется в int, на который указывает b.
*/

void ft_putstr(char *str)
{
    while (*str != '\0')
    {
        write(1, str, 1);
        str++;
    }
}

/*
//Test
int main(void)
{
	char a[] = "I like that!\n";
    //if work shows: I like that!
	ft_putstr( &a );
	return (0);
}
*/