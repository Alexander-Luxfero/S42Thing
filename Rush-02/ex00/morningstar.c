/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   morningstar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:48:50 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/19 19:03:54 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"



/*
void	func_hundreds(char *num); //420
char	*get_substr(char *str, int start); //len is always 3 
*/

char	*power_of_10(unsigned int length)
{
	char *output;
	unsigned int i;

	output[0] = '1';
	i = 1;
	while (i < length)
	{
		output[i] = '0';
		i++;
	}
	return (output);
}

void	*correction(unsigned int *div, unsigned int	*mod, unsigned int	len)
{
	unsigned int difer;
	if (mod == 0 && div >= 1)
	{
		*mod = 3;
		div--;
	}
	difer = *div * 3 + *mod - len;
	if (difer != 0)
		*mod = 3;
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	length_str1;
	unsigned int	i;

	length_str1 = 0;
	while (dest[length_str1] != '\0')
		length_str1++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[length_str1 + i] = src[i];
		i++;
	}
	dest[length_str1 + i] = '\0';
	return (dest);
}

void func_hundreds(char *str, t_data data)
{
	unsigned int	len;
	unsigned int	i;
	char 			*sub_str;
	//Length from 1 to 3
	len = length(str);
	//          012
	// str[3] : 223
	i = 0;
	while (i < (len - 1))
	{
		if (i == 0 && len == 3)
		{
			if (str[i] != '0')
			{
				sub_str = get_substr(str, 0, 1);
				search_dict(sub_str, data.parsed_num);
				search_dict("100", data.parsed_num);
			}
			i++;
		}
		if (str[i] >= '2' && str[i] <= '9')
		{
			sub_str = ft_strcat(str[i], "0");
			search_dict(sub_str, data.parsed_num);
			i++;
		}
		else if (str[i] < '2')
		{
			sub_str = ft_strcat(str[i], str[len - i]);
			search_dict(sub_str, data.parsed_num);
			break;
		}
		if (str[i] >= '1' && str[i] <= '9')
			search_dict(str[i], data.parsed_num);
	}
}

void morningstar(char *str, t_data data)
{
	unsigned int	len;
	unsigned int	div;
	unsigned int	mod;
	char 			*sub_str;

	len = length(str);
	div = len / 3; // 2
	mod = len % 3; // 1
	//          0 123 456
	// str[7] : 2 032 006
	while (div >= 0)
	{
		
		// correction if mod == 0, of if its not a first part
		//1) div = 2, mod = 1  2) div = 1, mod = 3 3) div = 0, mod = 3
		correction(div, mod, len);
		sub_str = get_substr(str, (len - (div * 3 + mod)), mod); 
		// 1) get_substr(str, 0, 1)     2) get_substr(str, 2, 3)   3) get_substr(str, 5, 3)
		// Example for 12 032 234 1) --> two + 2) --> one hundret twenty three + 3) --> six + 
		func_hundreds(sub_str, data);
		if (div > 0)
		//1)--> + million  2) --> + thousand  3) --> + NOTHING
			search_dict(power_of_10(div * 3 + 1), data.parsed_num);
		div--;
	}
// second loop, div == 1, mod == 1
// third loop, div == 0, mod == 3
}

/*
12 321

if len > 3 --> len/3 == 2* 1000 * 1000
				len%3 == 2 
str[9] : 102 032 234
f len >= 9 -->  mod = len%3 == 0 --> func_hundrets(str[0..mod]) --> twenty three
				div = len/3 == 3 times 1000
				if (mod == 0) --> mod = 3; div--;
				if div != 0 ->
					i = len - div * 3 - 1
                    
					j_len = 3
					while (div > 0)
						func_hundrets(str[i,j_len]) give only start
						div--;

str[39] : 123 000 000 000 000 000 000 000 000 000 000 000 000: undecillion
f len > 3 -->  mod = len%3 == 2 --> func_hundrets(str[0..mod]) --> twenty three
				div = len/3 == 12 times 1000
				if div != 0 ->
					i = len - div * 3 - 1
                    
					j_len = 3
					while (div > 0)
						func_hundrets(str[i,j_len]) give only start
						div--;
*/