/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:44:01 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/15 15:44:46 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power >= 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (0);
}
/*
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 3)
    {
        int value = atoi(argv[1]);
        int power = atoi(argv[2]);
        printf("%d\n", ft_recursive_power(value, power));
        printf("%d\n", (int)pow(value, power));
        printf("%s\n", \
        (ft_recursive_power(value, power) == (int)pow(value, power)) ? \
        "OK!" : "KO!");
    }
    return (0);
}
*/
