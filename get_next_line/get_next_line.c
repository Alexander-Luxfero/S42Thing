/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:46:25 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/14 11:40:16 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
//read, malloc, free
// char	*get_next_line(int fd)
// {
// 	static char	buffer[BUFFER_SIZE + 1];
// 	char		*next_line;
// 	char		*new_line;
// 	ssize_t		bytes_read;

// 	next_line = NULL;
// 	if (fd < 0 || BUFFER_SIZE <= 0)
// 		return (NULL);
// 	while (1)
// 	{
// 		if (*buffer == '\0')
// 		{
// 			bytes_read = read(fd, buffer, BUFFER_SIZE);
// 			if (!*buffer || bytes_read <= 0)
// 				return (free(next_line), NULL);
// 			buffer[bytes_read] = '\0';
// 		}
// 		new_line = ft_strchr_mod(buffer);
// 		if (new_line)
// 		{
// 			*new_line = '\0';
// 			next_line = ft_strjoin_mod(next_line, buffer, new_line - );
// 			ft_strlcpy(buffer, new_line, BUFFER_SIZE);
// 			return (next_line);
// 		}
// 		next_line = ft_strjoin_mod(next_line, buffer, bytes_read);
// 		*buffer = '\0';
// 	}
// }

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
		line = ft_strjoin(line, buffer);
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
	{
		perror("Ошибка при открытии файла");
		return ;
	}
	
	line = get_next_line(fd);
	printf("Чтение из файла:-->%s<--\n", line);
	free(line);
	
	if (fd != 0)
		close(fd);
}

int	main(void)
{
	char way_to_test[50];
	int i = 0;
	
	while (++i <= 16)
	{
		snprintf(way_to_test, sizeof(way_to_test), "./test/files/test%d", i);
		printf("\n\nTest %d\n", i);
		open_all(way_to_test);
	}	
	
	return (0);
}
*/
