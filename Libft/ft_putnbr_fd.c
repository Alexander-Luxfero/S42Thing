/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:39:31 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/08 12:21:07 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	num_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static int	ft_pow(int n, int pow)
{
	int	out;

	if (pow < 0)
		return (-1);
	if (pow == 0)
		return (1);
	out = n;
	while (pow > 1)
	{
		out = out * n;
		pow--;
	}
	return (out);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		len;
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
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
