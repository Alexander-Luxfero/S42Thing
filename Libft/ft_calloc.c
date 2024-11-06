#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
	size_t i;
	size_t total_size;
	void *block;
	char *pointer;

	total_size = count * size;
	block = malloc(total_size);
	if (!block)
		return (NULL);
	pointer = (char *)block;
	i = 0;
	while(i < total_size)
		pointer[i++] = 0;
	return (block);
}
