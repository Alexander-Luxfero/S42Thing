#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
Test
int main(void)
{
	int n = 30;
	ft_ft( &n );
	//if work shows 42
    char c[] = "00";
    c[1] = n%10 + '0';
    c[0] = n/10 + '0';
	write(1, &c, 2);
	return (0);
}
*/