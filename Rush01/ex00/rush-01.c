#include <unistd.h>
#include <stdlib.h>

int **make_grid(unsigned int size)
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
            grid[i][j] = ((j + i) % size) + 1;
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

        int **grid = make_grid(size); 
        if (!grid)
            return 1;
        print_grid(grid, size); 

        for (int i = 0; i < size; i++)
            free(grid[i]);
        free(grid); 
    }
    return 0;
}