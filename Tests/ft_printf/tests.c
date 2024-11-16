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


	printf("\nstd: %u \n", -1);
	ft_printf("custom: %u \n", -1);

	printf("\nstd: %u \n", -9);
	ft_printf("custom: %u \n", -9);

	printf("\nstd: %u \n", -10);
	ft_printf("custom: %u \n", -10);
	
	printf("\nstd: %u \n", -11);
	ft_printf("custom: %u \n", -11);
	
	printf("\nstd: %u \n", -14);
	ft_printf("custom: %u \n", -14);
	
	printf("\nstd: %u \n", -15);
	ft_printf("custom: %u \n", -15);
	
	printf("\nstd: %u \n", -16);
	ft_printf("custom: %u \n", -16);
	
	printf("\nstd: %u \n", -99);
	ft_printf("custom: %u \n", -99);
	
	printf("\nstd: %u \n", -100);
	ft_printf("custom: %u \n", -100);

	printf("\nstd: %u \n", -101);
	ft_printf("custom: %u \n", -101);

	printf("\nstd: %u \n", INT_MIN);
	ft_printf("custom: %u \n", INT_MIN);

    return 0;
}
