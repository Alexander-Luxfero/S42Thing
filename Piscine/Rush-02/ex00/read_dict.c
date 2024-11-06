/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gikarcev <gikarcev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:54:48 by gikarcev          #+#    #+#             */
/*   Updated: 2024/10/20 20:26:58 by gikarcev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	*read_dict(int fd)
{
	int		i;
	char	*line;
	int		bytes_read;

	i = 1;
	bytes_read = 0;
	line = (char *)malloc(1024 * sizeof(char));
	if (!line)
		return (NULL);
	bytes_read = read(fd, &line[i - 1], 1);
	if (bytes_read == 0)
	{
		free(line);
		return (NULL);
	}
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
