#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates and prints a multiplication table
 * from 0 to 9 in the specified format. It uses tabs to format the output.
 *
 * Return: 0 (Success)
 */
int main(void)
{
    int row, column, result;

    for (row = 0; row <= 9; row++)
    {
        for (column = 0; column <= 9; column++)
        {
            result = row * column;

            if (column > 0)
                _putchar(',');
            _putchar('\t');

            if (result < 10)
                _putchar(' ');
            _putchar('0' + result);
        }
        putchar('\n');
    }

    return (0);
}
