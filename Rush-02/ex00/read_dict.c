/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeaconu <adeaconu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:54:48 by gikarcev          #+#    #+#             */
/*   Updated: 2024/10/19 16:57:17 by adeaconu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//read the dictionary until the \n and return the whole line
	//open the file
	//read(1) char by char until we encounter \n
	//and keep track of how many chars we read
	//malloc a string with the necesaqry lenght
	//we read again with the exact number of chars

#include "rush.h"

char	*read_dict(int fd)
{
	int	i;
	char	
		*line;
	int	bytes_read;

	i = 1;
	bytes_read = 0;
	line = (char *)malloc(1024 * sizeof(char));
	if (!line)
		return (NULL);
	bytes_read = read(fd, &line[i - 1], 1);
	if (bytes_read == 0)
		return (NULL);
	while (line[i - 1] != '\n')
	{
		bytes_read = read(fd, &line[i], 1);
		if (bytes_read == 0)
			return (NULL);
		i++;
	}
	line[i - 1] = '\0';
	return (line);
}

// int main(void)
// {	
// 	char *line;
// 	char *path;
// 	int fd;
// 	path = "./numbers.dict";
// 	fd = open(path, O_RDONLY);
// 	if (fd <= 0)
// 	{
// 		ft_putstr("Dict Error\n");
// 		return (1);
// 	}	
// 	line = read_dict(fd);
// 	while (line)
// 	{
// 		line = read_dict(fd);
// 		if (!line)
// 			return (0);
// 		printf("%s\n", line);
// 	}
// 	free(line);
// 	close(fd);
//}
