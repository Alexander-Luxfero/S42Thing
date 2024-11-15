/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:57:35 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/15 23:45:52 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        // My random test!
        int decimal;
    	unsigned int undec;
    	int minus;
    	int i = 1;
    	int len1, len2;
    	char *str = "Some randome string!";
    	while (i < atoi(argv[1]))
    	{
    		minus = (rand() % 2) ? -1 : 1;
    		decimal = minus * (rand() % 2000000);
    		undec = rand() % 4000000000;
    		len1 = printf("Test(integer) %i\nDecimal: %d\nChar: %c \nString: %s \
    		\nPointer: %p \nUnsigned decimal: %u \nIn hex lower: %x \
    	 \nIn HEX upper: %X \nPercent sign: %%\n", i, decimal, str[0], str,\
    		str, undec, decimal, decimal);
    		printf("/////////////////////////\nlength writen: %d\n\n", len1);

    		len2 = ft_printf("Test(integer) %i\nDecimal: %d\nChar: %c\nString: %s\
    		\nPointer: %p \nUnsigned decimal: %u \nIn hex lower: %x \
    	 \nIn HEX upper: %X \nPercent sign: %%\n", i, decimal, str[0], str,\
    		str, undec, decimal, decimal);
    		ft_printf("/////////////////////////\nlength writen: %d\n\n", len2);
    		i++;
    	}
    }
	
	
	run_tests_char();
	run_tests_decimal();
	run_pointer_tests();

    return 0;
}
