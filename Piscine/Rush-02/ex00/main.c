/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gikarcev <gikarcev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 10:53:13 by gikarcev          #+#    #+#             */
/*   Updated: 2024/11/14 11:40:14 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	check_sub_str(char *sub_str)
{
	int	i;

	i = 0;
	while (*sub_str)
	{
		if (*sub_str != '0')
			i++;
		sub_str++;
	}
	return (i);
}

static int	init(t_data *data, int argc, char **argv)
{
	if (argc == 2)
	{
		data->dict = "./numbers.dict";
		data->num = argv[1];
	}
	else if (argc == 3)
	{
		data->dict = argv[1];
		data->num = argv[2];
	}
	data->parsed_num.num = (char *)malloc(512 * sizeof(char));
	if (!data->parsed_num.num)
		return (1);
	data->parsed_num.p_num = (char *)malloc(512 * sizeof(char));
	if (!data->parsed_num.p_num)
		return (1);
	data->word_count = 0;
	data->result = (char **)malloc(((512 * sizeof(char)) \
					* ft_strlen(data->num)) * 2);
	data->dict_error = 0;
	return (0);
}

void	free_mem(t_data	*data)
{
	int	i;

	i = 0;
	free(data->parsed_num.num);
	free(data->parsed_num.p_num);
	while (i <= data->word_count - 1)
		free(data->result[i++]);
	free(data->result);
}

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc != 2 && argc != 3)
	{
		ft_putstr("Error, wrong arguments passed\n");
		return (1);
	}
	if (init(&data, argc, argv) == 1)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	if (data.num[0] == '-')
	{
		ft_putstr("Error\n");
		return (1);
	}
	morningstar(data.num, &data);
	free_mem(&data);
	return (0);
}
