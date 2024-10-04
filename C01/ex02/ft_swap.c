#include <unistd.h>

void ft_swap(int *a, int *b)
{
    int swap = *a;
    *a = *b;
    *b = swap; 
}

/*Test
int main(void)
{
	int a = 2;
    int b = 5;
	ft_swap( &a, &b );
	//if work shows 5 -> 2
    char c[] = "0 -> 0\n";
    c[0] = a + '0';
    c[5] = b + '0';
	write(1, &c, 8);
	return (0);
}
*/