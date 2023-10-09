#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints single digits from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    
    for (n = 0; n < 10; n++)
    {
        putchar(n);
    }
    putchar('\n');
    return (0);
}
