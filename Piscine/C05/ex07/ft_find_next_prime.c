/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:52:28 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/08 08:47:35 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	prime;

	prime = 0;
	while (prime == 0)
	{
		if (ft_is_prime(nb) == 1)
			prime = nb;
		else
			prime = ft_find_next_prime(nb + 1);
	}
	return (prime);
}
/*
#include <stdio.h>
#include <stdlib.h>
//Простые это те что леляться на 1 и сами на себя только.
// тогда возвращает 1, если нет  то 0
//1,2,3,5,7,11,13,17,19 
int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int value = atoi(argv[1]);
        printf("%d\n", ft_find_next_prime(value));
    }
    return (0);
}
*/
