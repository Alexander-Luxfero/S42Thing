/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:51:56 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/19 18:52:26 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

/*
After change void to posibility put other dict
*/
// 1 - TRUE 0 - FALSE
//
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
	while (is_number(str[index]) && str[index] != ' ')
		parsed->num[add_num++] = str[index++];
	while (str[index] != ':')
		index++;
	parsed->num[add_num] = '\0';
	return (++index);
}

void	adding_str(char *str, t_number *parsed, unsigned int index)
{
	unsigned int	add_p;

	add_p = 0;
	while (str[index] == ' ')
		index++;
	while (is_printable(str[index]) && str[index])
		parsed->p_num[add_p++] = str[index++];
	parsed->p_num[add_p] = '\0';
}

void	parser(char *str, t_number *parsed)
{
	unsigned int	index;

	index = adding_nums(str, parsed);
	adding_str(str, parsed, index);
}
// #include <stdio.h>

// int main(int argc, char *argv[])
// {
//     if (argc == 2)
//     {
//         char *str = argv[1];
//         t_number *examp = parser(str);
//         printf("number: %s\nMeaning: %s\n", examp->num, examp->p_num);
//         free(examp->num);
//         free(examp->p_num);
//         free(examp);
//     }
//     return (0);
// }
