/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42berlin.de>      +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 08:46:38 by marvin           #+#    #+#              */
/*   Updated: 2024/11/14 11:40:13 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *arr;
    int index;
    int size;

    size = max - min;
    if (max - min <= 0)
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
/*
#include <stdio.h>

int main(void)
{
    /////////////////////////////////////
    printf("\n///////////////////////////////////////////\
    \nMin: %d , Max: %d \n", 1, 112);
    int *arr = ft_range(1, 112);
    if (arr != NULL)
    {
        for (int i = 0; i < 111; i++)
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
    /////////////
    printf("\n///////////////////////////////////////////\
    \nMin: %d , Max: %d \n", 1, -1);
    int *arr1 = ft_range(1, -1);
    if (arr1 != NULL)
    {
        for (int i = 0; i < 2; i++)
            printf(" %d", arr1[i]);
        printf("\n");
        free(arr1);
    }
    else
    {
        printf("Brake the rules, array is NULL!\n");
    }
    /////////////
    printf("\n///////////////////////////////////////////\
    \nMin: %d , Max: %d \n", 1, 19);
    int *arr2 = ft_range(1, 19);
    if (arr2 != NULL)
    {
        for (int i = 0; i < 18; i++)
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
    /////////////
    printf("\n///////////////////////////////////////////\
    \nMin: %d , Max: %d \n", 19, 0);
    int *arr3 = ft_range(19, 0);
    if (arr3 != NULL)
    {
        for (int i = 0; i < 19; i++)
            printf(" %d", arr3[i]);
        printf("\n");
        free(arr3);
    }
    else
    {
        printf("Brake the rules, array is NULL!\n");
    }
    ////////////
    printf("\n///////////////////////////////////////////\
    \nMin: %d , Max: %d \n", 1, 2);
    int *arr4 = ft_range(1, 2);
    if (arr4 != NULL)
    {
        for (int i = 0; i < 1; i++)
            printf(" %d", arr4[i]);
        printf("\n");
        free(arr4);
    }
    else
    {
        printf("Brake the rules, array is NULL!\n");
    }
    ////////////
    printf("\n///////////////////////////////////////////\
    \nMin: %d , Max: %d \n", 1, 1);
    int *arr5 = ft_range(1, 1);
    if (arr5 != NULL)
    {
        for (int i = 0; i < 1; i++)
            printf(" %d", arr5[i]);
        printf("\n");
        free(arr5);
    }
    else
    {
        printf("Brake the rules, array is NULL!\n");
    }

    return (0);
}
*/
