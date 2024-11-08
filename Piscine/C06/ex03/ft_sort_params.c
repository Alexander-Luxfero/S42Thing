/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:11:06 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/08 08:47:35 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	compare(char *s1, char *s2)
{
	int	out;

	out = 0;
	while (*s1 || *s2)
	{
		out = (int)((unsigned char)*s1 - (unsigned char)*s2);
		if (*s1 != *s2)
			return (out);
		s1++;
		s2++;
	}
	return (out);
}

void sort_tab(char *tab[], int size)
{
	int i;
    int j = -1;
	char *temp;

	j = 0;
    while (j < size - 1)
    {
        i = 0;
    	while (i < size - j - 1) {
			if(compare(tab[i], tab[i+1]) > 0) 
			{
				temp = tab[i];
				tab[i] = tab[i+1];
				tab[i+1] = temp;
			} 
			i++;
    	} 
		j++; 
    }
}

void	print_argument(char *str)
{
	int	str_len;

	str_len = 0;
	while (str[str_len])
		str_len++;
	write(1, str, str_len);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc <= 1)
		return (0);
	int	i;
	int iterator;
	char *list_of_strings[argc - 1];

	i = 0;
	while (i < argc - 1)
	{
		list_of_strings[i] = argv[i + 1];
		i++;
	}	
	sort_tab(list_of_strings, argc - 1);
	//////////
	iterator = -1;
	while (++iterator < argc - 1)
		print_argument(list_of_strings[iterator]);
	return (0);
}
