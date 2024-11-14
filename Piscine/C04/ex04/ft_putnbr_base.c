/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:24:25 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/14 11:40:14 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_length(char *base)
{
	int	len;

	len = 0;
	while (base[len])
		len++;
	return (len);
}

int	check_err(char *base)
{
	int	i;
	int	j;

	if (base_length(base) <= 1)
		return (1);
	i = 0;
	while (base[i])
	{
		if (base[i] == base[i + 1])
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] <= 32 || base[i] == 127 || base[i] == '-' || base[i] == '+')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	b_len;

	if (check_err(base) == 1 || nbr == -2147483648)
		return ;
	b_len = base_length(base);
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	if (nbr >= b_len)
		ft_putnbr_base(nbr / b_len, base);
	write(1, &base[nbr % b_len], 1);
}


#include <stdio.h>
#include <stdlib.h>

int main(void)
{		
	ft_putnbr_base(40, "poneyvif");
	printf(" Expected: vp\n\n");

	ft_putnbr_base(-12, "01");
	printf(" Expected:-1100 \n\n");

	ft_putnbr_base(2147483647, "0123456789abcdef");
	printf(" Expected: 7fffffff\n\n");

	ft_putnbr_base(123, "a");
	printf(" Expected: \n\n");

	ft_putnbr_base(-2147483648, "01");
	printf(" Expected: \n\n");

	ft_putnbr_base(123, "abccde");
	printf(" Expected: \n\n");

	ft_putnbr_base(123, "");
	printf(" Expected: \n\n");

	ft_putnbr_base(-0, "01");
	printf(" Expected: 0 \n\n");

	ft_putnbr_base(53, "0123456789abcdef");
	printf(" Expected: 35 \n\n");

	ft_putnbr_base(894867, "0123456789");
	printf(" Expected: 894867\n");

	return (0);
}
