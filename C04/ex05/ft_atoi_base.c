/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:24:25 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/08 15:25:31 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Как я понял это функция, которая получает на вход число c определенным 
основанием и должно вернуть его репрезентацию в INT.
Те мы передаём -7b и "0123456789abcdef"(база 16-тиричная) а получаем -123.
!!!!Обрабатывает негативные значения!!!!
Если неправильные аргументы ничего не отображает
пример неправильных аргументов:
+1. base = 1 или пуст
+2. base имеет повторения
+3. base имеет + или -
*/
int	base_l(char *base)
{
	int len;

	len = 0;
	while (base[len] != '\0')
		len++;
	return (len);
}

int	check_err(char *base)
{
	int	i;
	int j;

	i = 0;
	if (base_l(base) <= 1)
		return (0);
	while (i < base_l(base))
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			else if (base[i] == '-' || base[j] == '+')
				return (0);
			else
				j++;
		}
		i++;
	}
	return (1);
}

int	calculate(char *str, char *base, int i, int output)
{
	int j;

	j = 0;
	while (j < base_l(base))
	{
		if (base[j] == str[i])
		{
			output = output * base_l(base) + j;
			j = base_l(base);
		}
		j++;
	}
	return (output);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	output;

	i = 0;
	output = 0;
	sign = 1;
	if (check_err(base) == 0)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '-' && output == 0)
		{
			sign = -1;
			i++;
		}
		output = calculate(str, base, i, output); 
		i++;		
	}
	return ((sign * output));
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//
	printf("\n////////////////////////////////////////////////////////////\n");
	printf("Input: %s\nBase: %s\nOutput: %d\n", "101101", "01",\
	ft_atoi_base("101101", "01"));
	printf("%s\n", (ft_atoi_base("101101", "01") == 45 ? \
	 "OK!" : "KO!"));
	//
	printf("\n////////////////////////////////////////////////////////////\n");
	printf("Input: %s\nBase: %s\nOutput: %d\n", "ff", "0123456789abcdef",\
	ft_atoi_base("ff", "0123456789abcdef"));
	printf("%s\n", (ft_atoi_base("ff", "0123456789abcdef") == 255 ? \
	 "OK!" : "KO!"));
	//
	printf("\n////////////////////////////////////////////////////////////\n");
	printf("Input: %s\nBase: %s\nOutput: %d\n", "    +-14353", "0123456789",\
	ft_atoi_base("    +-14353", "0123456789"));
	printf("%s\n", (ft_atoi_base("    +-14353", "0123456789") == -14353 ? \
	 "OK!" : "KO!"));
	//
	printf("\n////////////////////////////////////////////////////////////\n");	
	printf("Input: %s\nBase: %s\nOutput: %d\n", "         ---10101001", "01",\
	ft_atoi_base("         ---10101001", "01"));
	printf("%s\n", (ft_atoi_base("         ---10101001", "01") == -169 ? \
	 "OK!" : "KO!"));
	//
	printf("\n////////////////////////////////////////////////////////////\n");
	printf("Input: %s\nBase: %s\nOutput: %d\n", "     +---59", \
	"0123456789abcdef", ft_atoi_base("     +---59", "0123456789abcdef"));
	printf("%s\n", (ft_atoi_base("     +---59", "0123456789abcdef") == -89 ? \
	 "OK!" : "KO!"));

	return (0);
}
*/