
#include <unistd.h>
//Solution was find with Chat GPT, and i not realy understand it at this moment
int check_safe(int *grid, int row, int col)
{
    int i;

    i = 0;
    while (i < row)
    {
        if (grid[i] == col || (i - row) == (grid[i] - col) || (i - row) == (col - grid[i]))
            return (0);
        i++;
    }
    return (1);
}

void    print_grid(int *grid, int size)
{
    int i;
    char c;

    i = 0;
    while (i < size)
    {
        c = grid[i] + '0';
        write(1, &c, 1);
        i++;
    }
    write(1, "\n", 1);
}

void    place_quine(int *grid, int row, int *counter, int size)
{
    int col;
    if (row == size)
    {
        print_grid(grid, size);
        (*counter)++;
        return ;
    }
    col = 0;
    while (col < size)
    {
        if (check_safe(grid, row, col))
        {
            grid[row] = col;
            place_quine(grid, row + 1, counter, size);
        }
        col++;
    }
}

int ft_ten_queens_puzzle(void)
{
    int size = 10;
    int grid[size];
    int counter;

    counter = 0;
    place_quine(grid, 0, &counter, size);
    return (counter);
}
/*
#include <stdio.h>

int main(void)
{
    int count = ft_ten_queens_puzzle();
    printf("Total %d variation\n", count);
    return (0);
}
*/