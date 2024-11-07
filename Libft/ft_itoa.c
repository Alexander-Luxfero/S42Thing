/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:39:31 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/07 23:39:31 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_len(int n)
{
	int	len;

	if (n < 0)
		len = 1;
	else
		len = 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*check_limits(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

char	*ft_itoa(int n)
{
	int		minus;
	int		len;
	char	*str;

	if (n == -2147483648)
		return (check_limits(n));
	minus = 0;
	len = num_len(n);
	if (n < 0)
	{
		n = -n;
		minus = 1;
	}
	str = malloc(len + 1 + minus);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (--len > 0)
	{
		str[len] = n % 10 + '0';
		n /= 10;
	}
	if (minus)
		str[0] = '-';
	return (str);
}
