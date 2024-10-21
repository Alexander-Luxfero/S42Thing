/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gikarcev <gikarcev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 10:53:13 by gikarcev          #+#    #+#             */
/*   Updated: 2024/10/19 18:45:28 by gikarcev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"



static void	search_dict(t_data	*data)
{
	char	*line;
	//if len data->num 1 || if len 2 && data->num[0] < '2'

	//if len data->num == 2
		//take data->num[0] add '0'
		//look up and print the data->num[0] add '0' (40)
		// take data->num[1], if its '0' skip
			//look up and print

	// if data->num len is == 3
		// take data->num[0] look up and print
		// look up and print 100
		// pass the last 2 chars to len 2

	// if data->num len is == 4
		// take data->num[0] look up and print
		// look up and print 1000
		// pass the last 3 chars to len 3

	// if data->num len is == 5
		// take data->num[0] look up and print
		// look up and print 1000
		// pass the last 3 chars to len 3

	line = read_dict(data->fd);
	parser(line, &data->parsed_num);
	while (1)
	{
		
		if (ft_strcmp(data->parsed_num.num, data->num) == 0)
		{
			ft_putstr(data->parsed_num.p_num);
			break ;
		}
		printf("\nHERE\n");
		line = read_dict(data->fd);
		parser(line, &data->parsed_num);
	}
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
		data->dict = argv[2];
		data->num = argv[1];
	}
	data->parsed_num.num = (char *)malloc(512 * sizeof(char));
	if (!data->parsed_num.num)
		return (1);
	data->parsed_num.p_num = (char *)malloc(512 * sizeof(char));
	if (!data->parsed_num.p_num)
		return (1);
	data->fd = open(data->dict, O_RDONLY);
	if (data->fd <= 0)
		return (1);
	return (0);
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
		ft_putstr("Error, wrong arguments passed\n");
		return (1);
	}
	search_dict(&data);
	return (0);
}
