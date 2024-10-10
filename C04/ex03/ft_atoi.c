/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:24:25 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/08 15:25:31 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	output;
	int	stop;

	i = 0;
	output = 0;
	sign = 1;
	stop = 0;
	while (str[i] != '\0' && stop != 1)
	{
		while (str[i] == ' ')
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign = -1 * sign;
			i++;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			while (str[i] >= '0' && str[i] <= '9')
			{
				output = output * 10 + (str[i] - '0');
				i++;
			}
		}
		else 
		{
			stop = 1;
		}
		i++;		
	}
	return ((sign * output));
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[] = " ---+--+1234ab567";
	int custom = ft_atoi(str);
	int standart = -1234;
	printf("Custom output: %d\n", custom );
	printf("Should be: %d\n", standart);
	printf("%s\n", (custom == standart ? "OK!" : "KO!"));

	return (0);
}

