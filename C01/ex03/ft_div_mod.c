#include <unistd.h>
/*
Эта функция делит параметры a на b и 
сохраняет результат в int, на который указывает div. 
Она также сохраняет остаток от деления a на b в int, 
на который указывает mod.
*/

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

/*
//Test
int main(void)
{
	int a = 5;
    int b = 2;
    int div = 0;
    int mod = 0;
	ft_div_mod( a, b, &div, &mod );
	//if work shows div = 2 mod = 1
    char c[] = "div = 2 -> mod = 1\n";
    c[6] = div + '0';
    c[17] = mod + '0';
	write(1, &c, 19);
	return (0);
}
*/