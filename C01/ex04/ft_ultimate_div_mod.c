#include <unistd.h>
/*
Эта функция делит параметры a на b. 
Результат этого деления сохраняется в int, на который указывает a. 
Остаток деления сохраняется в int, на который указывает b.
*/

void ft_ultimate_div_mod(int *a, int *b)
{
    int div = *a / *b;
    int mod = *a % *b;
    *a = div;
    *b = mod;
}

/*
//Test
int main(void)
{
	int a = 11;
    int b = 3;
    
	ft_ultimate_div_mod( &a, &b );
	//if work shows div = 3 mod = 2
    char c[] = "div = 0 -> mod = 0\n";
    c[6] = a + '0';
    c[17] = b + '0';
	write(1, &c, 19);
	return (0);
}
*/