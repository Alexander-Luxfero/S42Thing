/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:43:33 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/07 15:56:36 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	val_to_print;
	long long n = nb;

	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	
	if (n == 0)
	{
		write(1, "0", 1);
		return;
	}
		
	if (n > 10)
		ft_putnbr(n/10);
		
	val_to_print = (n % 10) + '0';
	write(1, &val_to_print , 1);
}
/*
#include <stdio.h>

int	main(void)
{
	long long number = -2147483648;
	ft_putnbr(number);

	printf("\n%lld\n", number);
}
*/