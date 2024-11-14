/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lookup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gikarcev <gikarcev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:39:14 by gikarcev          #+#    #+#             */
/*   Updated: 2024/11/14 11:40:14 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	add_nums(t_data *data)
{
	char	*temp;

	temp = ft_strdup(data->parsed_num.p_num);
	data->result[data->word_count] = temp;
	data->word_count++;
}

void	lookup_print(t_data *data, char *value)
{
	data->fd = open(data->dict, O_RDONLY);
	if (data->fd <= 0)
	{
		data->dict_error = 1;
		return ;
	}
	while (1)
	{
		data->line = read_dict(data->fd);
		if (!data->line)
		{
			data->dict_error = 1;
			break ;
		}
		parser(data->line, &data->parsed_num);
		if (ft_strcmp(data->parsed_num.num, value) == 0)
		{
			add_nums(data);
			break ;
		}
		if (data->line)
			free(data->line);
	}
	free(data->line);
	close(data->fd);
}
