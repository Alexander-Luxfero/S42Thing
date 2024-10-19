/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   morningstar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:48:50 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/19 19:03:54 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

/*
if len > 3 --> len/3 == 2* 1000 * 1000
				len%3 == 2 
 
str[38] : 23 000 000 000 000 000 000 000 000 000 000 000 000: undecillion
f len > 3 -->  mod = len%3 == 2 --> func_hundrets(str[0..mod]) --> twenty three
				div = len/3 == 12 times 1000
				if div != 0 ->
					i = len - div * 3
                    
					j = len - (--div) * 3
					while (div > 0)
						func_hundrets(str[i..j]) give only start
						div--;
*/

/*
void	func_hundreds(char *num); //420
char	*get_substr(char *str, int start); //len is always 3 
*/
void morningstar(char *str)
{
	unsigned int	len;

	len = length(str);
    if (len / 3 == 0)
        func_hundreds(str);
    else
		

}
