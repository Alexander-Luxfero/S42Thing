/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gikarcev <gikarcev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:51:56 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/15 23:45:51 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

static int	is_number(char str)
{
	return (str >= '0' && str <= '9');
}

static int	is_printable(char str)
{
	return (str >= 32 && str <= 126);
}

int	adding_nums(char *str, t_number *parsed)
{
	unsigned int	add_num;
	unsigned int	index;

	add_num = 0;
	index = 0;
	parsed->len_of_num = 0;
	while (str[index] && is_number(str[index]) && str[index] != ' ')
	{
		parsed->num[add_num++] = str[index++];
		parsed->len_of_num++;
	}
	while (str[index] && str[index] != ':')
		index++;
	parsed->num[add_num] = '\0';
	index++;
	return (index);
}

void	adding_str(char *str, t_number *parsed, int i)
{
	unsigned int	add_p;

	add_p = 0;
	while (str[i] == ' ')
		i++;
	while (is_printable(str[i]) && str[i])
	{
		parsed->p_num[add_p++] = str[i++];
	}
	parsed->p_num[add_p] = '\0';
}

void	parser(char *str, t_number *parsed)
{
	unsigned int	index;

	index = adding_nums(str, parsed);
	if (parsed->len_of_num > 0)
		adding_str(str, parsed, index);
}
