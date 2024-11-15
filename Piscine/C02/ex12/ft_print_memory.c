/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:39:30 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/15 23:45:51 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hex_address(unsigned long address)
{
	int	k;

	k = 15;
	while (k >= 0)
	{
		write(1, &"0123456789abcdef"[(address >> (4 * k)) & 0xf], 1);
		k--;
	}
	write(1, ": ", 2);
}

void	print_data_hex(unsigned int i, unsigned int size, char *addr)
{
	unsigned int	j;
	unsigned char	c;

	j = 0;
	while (j < 16)
	{
		c = ((unsigned char *)addr)[i + j];
		if (i + j < size)
		{
			write(1, &"0123456789abcdef"[c / 16], 1);
			write(1, &"0123456789abcdef"[c % 16], 1);
		}
		else
			write(1, "  ", 2);
		if (j % 2 == 1)
			write(1, " ", 1);
		j++;
	}
}

void	print_data_text(unsigned int i, unsigned int size, char *addr)
{
	unsigned int	j;
	unsigned char	c;

	j = 0;
	while (j < 16 && (i + j < size))
	{
		c = ((unsigned char *)addr)[i + j];
		if (c >= 32 && c <= 126)
			write(1, &c, 1);
		else
			write(1, ".", 1);
		j++;
	}
}

void	ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned long	address;

	i = 0;
	while (i < size)
	{
		address = (unsigned long)(addr + i);
		hex_address(address);
		print_data_hex(i, size, addr);
		print_data_text(i, size, addr);
		write(1, "\n", 1);
		i += 16;
	}
}
/*
//Test
int main(void) {
    char s[]="Bonjour les aminches\t\n\tc est fou.tout.ce qu on peut avec...";
    
    ft_print_memory(s, 67); 
    return 0;
}
*/
