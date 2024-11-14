/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 08:46:38 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/14 11:40:13 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void sort(int *arr, int size) {
    int i = 0;
    while (i < size - 2) {
        if(arr[i] > arr[i+1]) 
        {
            int contemporary = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = contemporary;
        } 
        i++;
    }
}

void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    while (i < size)
    {
        sort(tab, size);
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
	int arr[] = {3,1,7,8,2,4,6,5,9};
    //if work shows: {1, 2, 3, 4, 5, 6, 7, 8, 9, }
	ft_sort_int_tab( arr, 9 );
    printed(arr, 9);
	return (0);
}
*/
