/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:24:25 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/08 08:47:35 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	base_l(char *base);
int	check_err(char *base);
long long	calculate(char *str, char *base, unsigned int i, long long output);
int	get_num_len(long long nb, int base_len);

long long	ft_atoi_base(char *str, char *base_from)
{
	unsigned int	i;
	long long	sign;
	long long	out;

	i = 0;
	out = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i])
	{
		if (calculate(str, base_from, i, out) == out && base_l(base_from) > 1)
			break;
		out = calculate(str, base_from, i, out);
		i++;
	}
	return ((sign * out));
}

char	*ft_putnbr_base(long long nb, char *base_to, char *temp)
{
	int	b_len;
	
	b_len = base_l(base_to);
	if (nb >= b_len)
		temp = ft_putnbr_base(nb / b_len, base_to, temp);
	*temp = base_to[nb % b_len];
	return (temp + 1);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char *str_out;
	char *temp;
	long long	nb;
	int bl_to;

	if (check_err(base_from) == 0 || check_err(base_to) == 0)
		return (NULL);
	bl_to = base_l(base_to);
	nb = ft_atoi_base(nbr, base_from);
	str_out = malloc((get_num_len(nb, bl_to) + 1) * sizeof(char));
	if (!str_out)
		return (NULL);
	temp = str_out;
	if (nb < 0)
	{
		*temp++ = '-';
		nb = -nb;
	}

	temp = ft_putnbr_base(nb, base_to, temp);
	*temp = '\0';
	return (str_out);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	//
	printf("\n////////////////////////////////////////////////////////////\n");
	printf("Input: %s\nBase From: %s\nBase To: %s\nOutput: %s\n", "101101", "01",\
	"0123456789", ft_convert_base("101101", "01", "0123456789"));
	printf("%s\n", strcmp(ft_convert_base("101101", "01", "0123456789"), "45") == 0 ? \
	 "OK!" : "KO!");
	//
	printf("\n////////////////////////////////////////////////////////////\n");
	printf("Input: %s\nBase From: %s\nBase To: %s\nOutput: %s\n", \
	"   +---101101", "01", "0123456789", ft_convert_base("   +---101101", \
	"01", "0123456789"));
	printf("%s\n", strcmp(ft_convert_base("   +---101101", "01", "0123456789"), "-45") == 0 ? "OK!" : "KO!");
	//
	printf("\n////////////////////////////////////////////////////////////\n");
	printf("Input: %s\nBase From: %s\nBase To: %s\nOutput: %s\n", "", "01",\
	"0123456789", ft_convert_base("", "01", "0123456789"));
	printf("%s\n", strcmp(ft_convert_base("", "01", "0123456789"), "") == 0 ? \
	 "OK!" : "KO!");
	//
	printf("\n////////////////////////////////////////////////////////////\n");
	printf("Input: %s\nBase From: %s\nBase To: %s\nOutput: %s\n",\
	"+++---+--123643", "0123456789", "0123456789abcdef", \
	ft_convert_base("+++---+--123643", "0123456789", "0123456789abcdef"));
	printf("%s\n", strcmp(ft_convert_base("+++---+--123643", "0123456789", \
	"0123456789abcdef"), "-45") == 0 ? "OK!" : "KO!");
	//
	return (0);
}
*/
