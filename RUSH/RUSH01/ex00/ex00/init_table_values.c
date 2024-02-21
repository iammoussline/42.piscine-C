#include <stdio.h>

#define SIZE 4

void init_table_values(int table[SIZE][SIZE], char *str)
{
    int i = 0;
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            while (str[i] == ' ')
                i++;
            table[row][col] = str[i] - '0';
            i++;
        }
    }
}