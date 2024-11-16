/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:39:31 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/15 23:45:53 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//Экспериментальное говно делалось в порыве ночного угара, 
//но проходи  почти все тесты кроме тестов по памяти
static size_t	ft_use_that_shit(char *str)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (str[i] == '0' && str[i + 1] != '\0')
		i++;
	len += ft_putstr(&str[i]);
	return (len);
}

static char	*get_base(int uppercase, int base)
{
	char	*base16;
	char	*out;
	int		i;

	out = malloc(base);
	if (!out)
		return (NULL);
	if (uppercase)
		base16 = "0123456789ABCDEF";
	else
		base16 = "0123456789abcdef";
	i = -1;
	while (++i < base)
		out[i] = base16[i];
	return (out);
}

// for linus (nil) for macOS 0x0
size_t	ft_putbase(unsigned int n, int uppercase, int baselen)
{
	char			*base;
	int				i;
	char			*value;
	size_t			len;

	value = malloc(baselen + 1);
	if (!value)
		return (0);
	value[baselen] = '\0';
	base = get_base(uppercase, baselen);
	if (base == NULL)
		return (0);
	i = baselen;
	while (i >= 0)
	{
		value[i] = base[n % baselen];
		n /= baselen;
		i--;
	}
	len = ft_use_that_shit(value);
	free(value);
	free(base);
	return (len);
}