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
	int	i;
	int	out[];

	if (index < 0)
		return (-1);
	i = 0;
	while (i <= 1)
	{
		out[i] = i;
		i++;
	}
	if (index > 1)
	{
		while (i <= index)
		{
			out[i] = out[i - 1] + out[i - 2];
			i++;
		}
	}
	return (out[index]);
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
