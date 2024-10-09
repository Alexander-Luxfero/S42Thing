/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:24:25 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/08 15:25:31 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
Как я понял это функция, которая получает на вход число и должна отоюразить его
используя переданную систему счисления переданную как строку.
Те мы передаём 25 и "0123456789abcdef"(база 16-тиричная).
!!!!Обрабатывает негативные значения!!!!
Если неправильные аргументы ничего не отображает
пример неправильных аргументов:
+1. base = 1 или пуст
+2. base имеет повторения
+3. base имеет + или -
*/
int	base_length(char *base)
{
	int len;

	len = 0;
	while (base[len] != '\0')
		len++;
	return (len);
}

int	check_err(char *base)
{
	int	i;
	int j;

	i = 0;
	while (base[i] < base_length(base))
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			else if (base[i] == '-' || base[j] == '+')
				return (1);
			else
				j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (base_length(base) <= 1 || check_err(base) == 1)
		return;
	
	if (nbr < 0)
	{
		write(1,"-", 1);
		nbr = -1 * nbr; 
	}
	if (nbr/base_length(base) != 0)
	{
		ft_putnbr_base(nbr/base_length(base), base);
		write(1, &base[nbr%base_length(base)], 1);
	} else {
		write(1, &base[nbr], 1);
	}
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int str = 'z';
	ft_putnbr_base(str, argv[1]);
	printf("\n");

	return (0);
}
