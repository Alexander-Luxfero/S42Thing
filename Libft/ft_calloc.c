/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:39:31 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/15 23:45:53 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*block;

	total_size = count * size;
	if (total_size / count != size)
		return (NULL);
	block = malloc(total_size);
	if (!block)
		return (NULL);
	ft_bzero(block, total_size);
	return (block);
}

/*
#include <stdio.h>
int main()
{
	printf("STD: %s |  %p \n", (char *)calloc((INT64_MAX) , 2),\
	 calloc((INT64_MAX), 2));
	printf("CTD: %s |  %p \n", (char *)ft_calloc((INT64_MAX), 2),\
	 ft_calloc((INT64_MAX), 2));
	printf("STD: %s |  %p \n", (char *)calloc(0, 0),\
	 calloc(0, 0));
	printf("CTD: %s |  %p \n", (char *)ft_calloc(0, 0),\
	 ft_calloc(0, 0));
	return (0);
}
*/
