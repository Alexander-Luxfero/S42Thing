/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_hundreds.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gikarcev <gikarcev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:37:38 by gikarcev          #+#    #+#             */
/*   Updated: 2024/11/15 23:45:51 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	print_h(char *str, t_data *data, unsigned int *i, unsigned int *len)
{
	char	*sub_str;

	if (str[*i] != '0')
	{
		sub_str = get_substr(str, 0, 1);
		lookup_print(data, sub_str);
		lookup_print(data, "100");
		free(sub_str);
	}
	(*i)++;
	(*len)--;
}

void	print_tens(char *str, t_data *data, unsigned int *i)
{
	char			*temp;

	temp = get_substr(str, *i, 1);
	ft_strcat(temp, "0"); 
	lookup_print(data, temp);
	free(temp);
}

void	print(t_data *data, char *str, int i, int len)
{
	char			*temp;

	temp = get_substr(str, i, len);
	lookup_print(data, temp);
	free(temp);
}

void	func_hundreds(char *str, t_data *data)
{
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(str);
	i = 0;
	while (len != 0)
	{
		if (i == 0 && len == 3)
			print_h(str, data, &i, &len);
		if (str[i] >= '2' && str[i] <= '9' && len == 2)
			print_tens(str, data, &i);
		else if (str[i] < '2' && len == 2 && str[i] != '0')
		{
			print(data, str, i, 2);
			return ;
		}
		else if (str[i] >= '1' && str[i] <= '9' && str[i] != '0')
		{
			print(data, str, i, 1);
			return ;
		}
		i++;
		len--;
	}
}
