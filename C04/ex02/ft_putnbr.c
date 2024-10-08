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

	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	
	if (nb == 0)
	{
		write(1, "0", 1);
		return;
	}
		
	if (nb > 10)
		ft_putnbr(nb/10);
		
	val_to_print = (nb % 10) + '0';
	write(1, &val_to_print , 1);
}
/*
#include <stdio.h>

int	main(void)
{
	int number = 247;
	ft_putnbr(number);

	printf("\n%x\n", number);
}
*/
