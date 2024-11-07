#include <unistd.h>

int num_len(int n)
{
	int len;

	len = 0;
	if (n == 0)
		return (1);
	while(n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

int ft_pow(int n, int pow)
{
	int out;
	if (pow < 0)
		return (-1);
	if (pow == 0)
		return (1);
	out = n;
	while(pow > 1)
	{
		out = out * n;
		pow--;
	}
	return (out);
}

void ft_putnbr_fd(int n, int fd)
{
    int len;
    int minus;
		int i;
		char c;

		if (n == -2147483648)
		{
			write(fd, "-2147483648", 12);
			return ;
		}
    minus = (n < 0) ? 1 : 0;
    if (minus)
		{
      write(fd, "-", 1);
			n = -n;
		}
    len = num_len(n);
    while (len > 0)
    {
        c = (n / ft_pow(10, len - 1)) + '0';
        write(fd, &c, 1);
        n %= ft_pow(10, len - 1);
        len--;
    }
}
/*
int main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-10, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-123, 1);
	write(1, "\n", 1);
}
*/