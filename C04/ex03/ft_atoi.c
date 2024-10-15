/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:24:25 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/15 13:25:02 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

long long	get_output(char *str, long long output)
{
	while (*str >= '0' && *str <= '9')
	{
		output = output * 10 + (*str - '0');
		str++;
	}
	return (output);
}

int	ft_atoi(char *str)
{
	int			i;
	long	sign;
	long	output;

	i = 0;
	sign = 1;
	output = 0;
	if (ft_strlen(str) == 0)
		return (0);
	while (*str && output == 0)
	{
		while (*str == ' ' && output == 0)
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sign = -1 * sign;
			str++;
		}
		output = get_output(str, output);
	}
	output = sign * output;
	return ((int)output);
}

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
	printf("Input: %s\nOutput: %d\n", "+6789", ft_atoi("+6789"));
	printf("%s\n", (ft_atoi("+6789") == 6789 ? "OK!" : "KO!"));
	 
	printf("\n////////////////////////////////////////////////////////////\n");
	printf("Input: %s\nOutput: %d\n", "000123", ft_atoi("000123"));
	printf("%s\n", (ft_atoi("000123") == 123 ? "OK!" : "KO!"));
	
	printf("\n////////////////////////////////////////////////////////////\n");
	printf("Input: %s\nOutput: %d\n", "2147483648", ft_atoi("2147483648"));
	printf("%s\n", (ft_atoi("2147483648") == -2147483648 ? "OK!" : "KO!"));
	 
	printf("\n////////////////////////////////////////////////////////////\n");
	printf("Input: %s\nOutput: %d\n", "-0", ft_atoi("-0"));
	printf("%s\n", (ft_atoi("0") == 0 ? "OK!" : "KO!"));
	

	return (0);
}

