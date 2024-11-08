/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 08:46:38 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/08 08:47:35 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int length = 0;
    while (*str != '\0')
    {   
        str++;
        length++;
    }
    return length;
}

/*
//Test
void printed(int length)
{
    if(length >= 10)
    {
        printed(length/10);
    }
    char ch = length % 10 + '0';
    write(1, &ch, 1);
}

int main(void)
{
	char a[] = "I like that!";
    //if work shows: 12
	int len = ft_strlen( a );
    printed(len);
	return (0);
}
*/
