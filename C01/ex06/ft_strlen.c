#include <unistd.h>
/*
Эта функция делит параметры a на b. 
Результат этого деления сохраняется в int, на который указывает a. 
Остаток деления сохраняется в int, на который указывает b.
*/

int ft_strlen(char *str)
{
    int length = 0;
    while (*str != '\0')
    {   
        str++;
        length++;
    }
    return length;
}

/*
//Test
void printed(int length)
{
    if(length >= 10)
    {
        printed(length/10);
    }
    char ch = length % 10 + '0';
    write(1, &ch, 1);
}

int main(void)
{
	char a[] = "I like that!";
    //if work shows: 12
	int len = ft_strlen( a );
    printed(len);
	return (0);
}
*/