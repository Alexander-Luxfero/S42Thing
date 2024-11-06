/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   morningstar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gikarcev <gikarcev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:38:33 by gikarcev          #+#    #+#             */
/*   Updated: 2024/10/20 20:57:54 by gikarcev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	correction(int *div, unsigned int *mod, unsigned int len)
{
	if (*mod == 0 && (*div) >= 1)
	{
		*mod = 3;
		*div = (*div) - 1;
	}
	if (((*div) * 3 + (*mod) - len) != 0)
		*mod = 3;
}

void	print_numbers(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->word_count - 1)
	{
		ft_putstr(data->result[i]);
		ft_putstr(" ");
		i++;
	}
	ft_putstr(data->result[i]);
	ft_putstr("\n");
}

void	morningstar(char *str, t_data *data)
{
	int				div;
	unsigned int	mod;
	char			*sub_str;
	char			*value;

	div = ft_strlen(str) / 3;
	mod = ft_strlen(str) % 3;
	while (div >= 0)
	{
		correction(&div, &mod, ft_strlen(str));
		sub_str = get_substr(str, (ft_strlen(str) - (div * 3 + mod)), mod);
		func_hundreds(sub_str, data);
		if (div > 0 && check_sub_str(sub_str) != 0)
		{
			value = power_of_10(div * 3 + 1);
			lookup_print(data, value);
			free(value);
		}
		div--;
		free(sub_str);
	}
	if (data->dict_error == 0)
		print_numbers(data);
	else if (data->dict_error == 1)
		ft_putstr("Dict Error\n");
}
