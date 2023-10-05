#include <stdio.h>
#include <unistd.h> // Include this for STDOUT_FILENO

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
    write(STDOUT_FILENO, "and that piece of art is useful - Dora Korpar,"
                         \"2015-10-19\n", 54);
    return (1);
}
