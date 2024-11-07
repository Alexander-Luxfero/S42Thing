#include "libft.h"

int num_len(int n)
{
	int len;

	len = (n < 0) ? 1 : 0;
	while(n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char *check_limits(int n)
{
	if(n == -2147483648)
		return(ft_strdup("-2147483648"));
	return (NULL);
}

char *ft_itoa(int n)
{
	int minus;
	char *str;
	int len;

	if(n == -2147483648)
		return (check_limits(n));
	minus = (n < 0) ? 1 : 0;
	len = num_len(n);
	str = malloc(len + 1 + minus);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (minus)
		n = -n;
	while(--len > 0)
	{	
		str[len] = n % 10 + '0';
		n /= 10;
	}
	if(minus)
		str[0] = '-';
	return (str);
}