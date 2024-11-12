
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc < 2)
	{
		printf("Используйте: ./a.out <имя файла> или ./a.out - для ввода с stdin\n");
		return (1);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Ошибка при открытии файла");
		return (1);
	}
	
	printf("Чтение из файла:\n");
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	
	if (fd != 0)
		close(fd);
	return (0);
}