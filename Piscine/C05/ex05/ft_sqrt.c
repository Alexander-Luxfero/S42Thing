/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:48:58 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/08 08:47:35 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb > 0)
	{
		i = 1;
		while (i * i <= nb)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int value = atoi(argv[1]);
        printf("%d\n", ft_sqrt(value));
        printf("%d\n", (int)sqrt(value));
        printf("%s\n", \
        (ft_sqrt(value) == (int)sqrt(value)) ? \
        "OK!" : "KO!");
    }
    return (0);
}
*/
