/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:44:59 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/15 15:48:41 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	x1;
	int	x2;
	int	i;
	int	bucket;

	if (index < 0)
		return (-1);
	i = 0;
	x1 = 0;
	x2 = 1;
	if (0 == index)
		return (x1);
	if (1 == index)
		return (x2);
	while (++i < index)
	{
		bucket = x2;
		x2 = bucket + x1;
		x1 = bucket;
	}
	return (x2);
}
/*
#include <stdio.h>
#include <stdlib.h>
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377
int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int index = atoi(argv[1]);
        printf("%d\n", ft_fibonacci(index));
    }
    return (0);
}
*/
