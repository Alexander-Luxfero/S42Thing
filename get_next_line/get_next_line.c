/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:43:03 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/15 23:45:53 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	char		*temp;
	ssize_t		bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	while (1)
	{
		if (!*buffer)
		{
			bytes_read = read(fd, buffer, BUFFER_SIZE);
			if (bytes_read <= 0)
			{
				if (bytes_read == 0)
					return (line);
				free(line);
				return (NULL);
			}
			buffer[bytes_read] = '\0';
		}
		temp = ft_strchr(buffer, '\n');
		if (temp != 0)
		{
			*temp = '\0';
			line = ft_strjoin(line, buffer);
			ft_strlcpy(buffer, temp + 1, BUFFER_SIZE);
			return (line);
		}
		else
		{
			line = ft_strjoin(line, buffer);
		}
		buffer[0] = '\0';
	}
}
/*
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	open_all(char *str)
{
	int		fd;
	char	*line;

	fd = open(str, O_RDONLY);
	if (fd == -1)
		return ;
	
	line = get_next_line(fd);
	printf("Чтение из файла:-->%s<--\n", line);
	free(line);

	line = get_next_line(fd);
	printf("Чтение из файла:-->%s<--\n", line);
	free(line);
	line = get_next_line(fd);
	printf("Чтение из файла:-->%s<--\n", line);
	free(line);
	line = get_next_line(fd);
	printf("Чтение из файла:-->%s<--\n", line);
	free(line);
	line = get_next_line(fd);
	printf("Чтение из файла:-->%s<--\n", line);
	free(line);
	
	if (fd != 0)
		close(fd);
}

int	main(void)
{
	// char way_to_test[50];
	// int i = 0;
	
		//snprintf(way_to_test, sizeof(way_to_test), "./test/files/test%d", i);
		printf("\n\nTest %d\n", 1);
		open_all("./test/files/alternate_line_nl_no_nl");	
	
	return (0);
}
*/
