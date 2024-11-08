/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:06:43 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/08 08:47:35 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc > 0)
	{
		while (argv[0][i] != '\0')
			i++;
		write(1, argv[0], i);
		write(1, "\n", 1);
	}
	return (0);
}
