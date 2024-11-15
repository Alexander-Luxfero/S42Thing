/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 08:46:39 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/15 23:45:51 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *arr;
    int index;
    int size;

    size = max - min;
    if (size <= 0)
        return (NULL);
    arr = malloc((size + 1) * sizeof(int));
    if (!arr)
        return (NULL);
    index = -1;
    while (++index < size)
    {
        if (max > min)
            arr[index] = min + index;
        else
            arr[index] = min - index;
    }
    return (arr);
}

int ft_ultimate_range(int **range, int min, int max)
{
    int size;

    size = max - min;
    if (size <= 0)
    {    
        *range = NULL;
        return (0);
    }
    *range = ft_range(min, max);
    if (!*range)
        return (-1);
    return (size);
}
/*
#include <stdio.h>

int main(void)
{
    /////////////////////////////////////
    printf("\n///////////////////////////////////////////\
    \nMin: %d , Max: %d \n", 1, 112);
    int *arr;
    int len = ft_ultimate_range(&arr, 1, 112);
    if (len > 0)
    {
        printf("length: %d\n", len);
        for (int i = 0; i < len; i++)
        {
            printf(" %d", arr[i]);
            if ((i + 1) % 10 == 0)
                printf("\n");
        }
        printf("\n");
        free(arr);
    }
    else
    {
        printf("Brake the rules, array is NULL!\n");
    }
    ////////////////////////////////////////////
     printf("\n///////////////////////////////////////////\
    \nMin: %d , Max: %d \n", 1, -11);
    int *arr1;
    int len1 = ft_ultimate_range(&arr1, 1, -11);
    if (len1 > 0)
    {
        printf("length: %d\n", len1);
        for (int i = 0; i < len1; i++)
        {
            printf(" %d", arr1[i]);
            if ((i + 1) % 10 == 0)
                printf("\n");
        }
        printf("\n");
        free(arr1);
    }
    else
    {
        printf("Brake the rules, array is NULL!\n");
    }
    ////////////////////////////////////////////
     printf("\n///////////////////////////////////////////\
    \nMin: %d , Max: %d \n", 1, 2);
    int *arr2;
    int len2 = ft_ultimate_range(&arr2, 1, 2);
    if (len2 > 0)
    {
        printf("length: %d\n", len2);
        for (int i = 0; i < len2; i++)
        {
            printf(" %d", arr2[i]);
            if ((i + 1) % 10 == 0)
                printf("\n");
        }
        printf("\n");
        free(arr2);
    }
    else
    {
        printf("Brake the rules, array is NULL!\n");
    }
    

    return (0);
}
*/
