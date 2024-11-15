/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:09:44 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/15 23:45:50 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	str_len;

	i = 1;
	while (i < argc)
	{
		str_len = 0;
		while (argv[argc - i][str_len] != '\0')
			str_len++;
		write(1, argv[argc - i], str_len);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
