/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:24:25 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/14 11:40:14 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_l(char *base)
{
	int	len;

	len = 0;
	while (base[len] != '\0')
		len++;
	return (len);
}

int	get_num_len(long long nb, int base_len)
{
	int	len = 0;

	if (nb <= 0)
		len++;
	while (nb)
	{
		nb = nb / base_len;
		len++;
	}
	return (len);
}

long long	calculate(char *str, char *base, unsigned int i, long long output)
{
	int	j;

	j = 0;
	while (j < base_l(base))
	{
		if (base[j] == str[i])
		{
			output = output * base_l(base) + j;
			break;
		}
		j++;
	}
	return (output);
}

int	check_err(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base_l(base) <= 1)
		return (0);
	while (i < base_l(base))
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
