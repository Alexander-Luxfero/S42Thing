/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gikarcev <gikarcev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:03:01 by gikarcev          #+#    #+#             */
/*   Updated: 2024/11/08 08:47:35 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	*ft_strdup(char *src)
{
	char	*copy;
	int		length;
	int		i;

	length = 0;
	while (src[length])
		length++;
	copy = malloc((length + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	i = -1;
	while (++i < length)
		copy[i] = src[i];
	copy[i] = '\0';
	return (copy);
}

char	*get_substr(char *str, int start, int length)
{
	char	*substr;

	if (start == 0 && length == 0)
		return (str);
	substr = (char *)malloc(4 * sizeof(char));
	ft_strncpy(substr, str + start, length); 
	substr[length] = '\0'; 
	return (substr);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	length_str1;
	unsigned int	i;

	length_str1 = 0;
	while (dest[length_str1] != '\0')
		length_str1++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[length_str1 + i] = src[i];
		i++;
	}
	dest[length_str1 + i] = '\0';
	return (dest);
}

char	*power_of_10(unsigned int length)
{
	char			*output;
	unsigned int	i;

	output = (char *)malloc((length + 1) * sizeof(char));
	output[0] = '1';
	i = 1;
	while (i < length)
	{
		output[i] = '0';
		i++;
	}
	output[i] = '\0';
	return (output);
}
