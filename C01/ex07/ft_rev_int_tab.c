#include <unistd.h>
/*
Создайте функцию, которая переворачивает заданный массив целых чисел 
(первый идет последним и т.д.). 
• Аргументами являются указатель на int и количество целых чисел в массиве.
*/

void ft_rev_int_tab(int *tab, int size)
{
    int half = size / 2;
    int i = 0;
    while (i < half)
    {
        int contemporary_int = tab[i];
        tab[i] = tab[size - i - 1];
        tab[size - i - 1] = contemporary_int;
        i++;
    }
}


/*
//Test
void printed(int *arr, int size)
{
    int i = 0;
    write(1, "{", 1);
    while (i < size)
    {
        char ch[3];
        ch[0] = arr[i] + '0';
        ch[1] = ',';
        ch[2] = ' ';
        write(1, &ch, 2);
        i++;
    }
    write(1, "}", 1);
}

int main(void)
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
    //if work shows: {9, 8, 7, 6, 5, 4, 3, 2, 1, }
	ft_rev_int_tab( arr, 9 );
    printed(arr, 9);
	return (0);
}
*/