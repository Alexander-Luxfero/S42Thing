/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 08:47:00 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/14 11:40:15 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
//get a size of int in string
int grid_size(char *str)
{
    int size = 0;
    while (*str)
    {
        if (*str >= '0' && *str <= '9')
            size++;
        str++;
    }
    return (size);
}

//get the size of grid and string, and convert it to regular array 
// int temp[size] = {4,3,2,1,1,2,2,2,4,3,2,1,1,2,2,2}
int *temp_def(int length, char *str, int *temp)
{
    int i = 0;
    while (*str)
    {
        if (*str >= '0' && *str <= '9')
        {
            temp[i] = *str - '0';
        }
        str++;
    }
    return (temp);
}

int **make_grid(unsigned int size, int slide, int direction)
{
    int **grid = malloc(size * sizeof(int *));
    if (!grid)
        return NULL;

    for (unsigned int i = 0; i < size; i++)
    {
        grid[i] = malloc(size * sizeof(int));
        if (!grid[i])
            return NULL;

        for (unsigned int j = 0; j < size; j++)
        {
            grid[i][j] = (direction * (j + i + slide) % size) + 1;
        }
    }
    return grid;
}

void print_grid(int **grid, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++)
    {
        for (unsigned int j = 0; j < size; j++)
        {
            char x = grid[i][j] + '0'; 
            write(1, &x, 1);    
            if (j < size - 1)
                write(1, " ", 1); 
        }
        write(1, "\n", 1);
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int size = atoi(argv[1]); 
        if (size <= 0)
            return 1; 

        int **grid = make_grid(size, 0, -1); 
        if (!grid)
            return 1;
        print_grid(grid, size); 

        for (int i = 0; i < size; i++)
            free(grid[i]);
        free(grid); 
    }
    return 0;
}
