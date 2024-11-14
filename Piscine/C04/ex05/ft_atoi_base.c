/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:24:25 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/14 11:40:14 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_l(char *base)
{
	int	len;

	len = 0;
	while (base[len] != '\0')
		len++;
	return (len);
}

int	check_err(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base_l(base) <= 1)
		return (0);
	while (i < base_l(base))
	{
		if (base[i] == '-' || base[j] == '+')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	calculate(char *str, char *base)
{
	int	j;
	int output;
	int size;

	j = 0;
	output = 0;
	size = base_l(base);
	while (*str)
	{
		while (j < size)
		{
			if (*str == base[j])
			{
				output = output * size + j;
				break;
			}
			else if (base[j] != *str && j == size - 1)
				return (output);
			j++;
		}
		str++;
		j = 0;
	}
	return (output);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	output;

	sign = 1;
	if (check_err(base) == 0)
		return (0);
	while (*str == ' ' || *str == '-' || *str == '+' || *str == '\t'\
	|| *str == '\n' || *str == '\v' || *str == '\r')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	output = calculate(str, base);
	return ((sign * output));
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//
	printf("\n////////////////////////////////////////////////////////////\n");
	printf("Input: %s\nBase: %s\nOutput: %d\nExpected: %d\n", "101101", "01",\
	ft_atoi_base("101101", "01"), 45);
	
	//
	printf("\n////////////////////////////////////////////////////////////\n");
	printf("Input: %s\nBase: %s\nOutput: %d\nExpected: %d\n", "ff", "0123456789abcdef",\
	ft_atoi_base("ff", "0123456789abcdef"), 255);

	return (0);
}
*/
