/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:24:25 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/14 11:40:14 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	output;

	sign = 1;
	output = 0;
	while (*str == ' ' || *str == '-' || *str == '+' || *str == '\t'\
	|| *str == '\n' || *str == '\v' || *str == '\r')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		output = output * 10 + (*str - '0');
		str++;
	}
	return (output * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//
	printf("\n////////////////////////////////////////////////////////////\n");
	printf("Input: %s\nOutput: %d\n", "101101", ft_atoi("101101"));
	printf("%s\n", (ft_atoi("101101") == 101101 ? "OK!" : "KO!"));
	 
	printf("\n////////////////////////////////////////////////////////////\n");
	printf("Input: %s\nOutput: %d\n", " ---+--+1234ab567", ft_atoi(" ---+--+1234ab567"));
	printf("%s\n", (ft_atoi(" ---+--+1234ab567") == -1234 ? "OK!" : "KO!"));
	 //
	printf("\n////////////////////////////////////////////////////////////\n");
	printf("Input: %s\nOutput: %d\n", "+abc123", ft_atoi("+abc123"));
	printf("%s\n", (ft_atoi("+abc123") == 0 ? "OK!" : "KO!"));

	printf("\n////////////////////////////////////////////////////////////\n");
	printf("Input: %s\nOutput: %d\n", "+6789", ft_atoi("+6789"));
	printf("%s\n", (ft_atoi("+6789") == 6789 ? "OK!" : "KO!"));
	 
	printf("\n////////////////////////////////////////////////////////////\n");
	printf("Input: %s\nOutput: %d\n", "000123", ft_atoi("000123"));
	printf("%s\n", (ft_atoi("000123") == 123 ? "OK!" : "KO!"));
///
	printf("\n////////////////////////////////////////////////////////////\n");
	printf("Input: %s\nOutput: %d\n", "-2147483648", ft_atoi("-2147483648"));
	printf("%s\n", (ft_atoi("-2147483648") == -2147483648 ? "OK!" : "KO!"));
	
	printf("\n////////////////////////////////////////////////////////////\n");
	printf("Input: %s\nOutput: %d\n", "2147483647", ft_atoi("2147483647"));
	printf("%s\n", (ft_atoi("2147483647") == 2147483647 ? "OK!" : "KO!"));
	 
	printf("\n////////////////////////////////////////////////////////////\n");
	printf("Input: %s\nOutput: %d\n", "-0", ft_atoi("-0"));
	printf("%s\n", (ft_atoi("-0") == 0 ? "OK!" : "KO!"));
	
	printf("\n////////////////////////////////////////////////////////////\n");
	printf("Input: %s\nOutput: %d\n", "0", ft_atoi("0"));
	printf("%s\n", (ft_atoi("0") == 0 ? "OK!" : "KO!"));

	return (0);
}
*/
