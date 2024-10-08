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
	int	starts_alpha;

	i = 0;
	output = 0;
	sign = 1;
	starts_alpha = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		output = output * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(sign * output));
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		char str[] = " ---+--+1234ab567";
		printf("%s\n", (ft_atoi(str) == atoi(str) ? "OK!" : "KO!"));
	} 
	else if (argc == 2)
	{
		printf("%s\n", (ft_atoi(argv[1]) == atoi(argv[1]) ? "OK!" : "KO!"));
	}
	return (0);
}
*/
