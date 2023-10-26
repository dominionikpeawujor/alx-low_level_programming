#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to calculate the square root.
 *
 * Return: The natural square root of the number, or -1 if no natural square root exists.
 */
int _sqrt_recursion(int n)
{
    return sqrt_recursive(n, 0);
}

/**
 * sqrt_recursive - Recursive helper function to find the square root.
 * @n: The number for which to calculate the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of the number, or -1 if no natural square root exists.
 */
int sqrt_recursive(int n, int guess)
{
    if (guess * guess == n)
        return guess;

    if (guess * guess > n)
        return -1;

    return sqrt_recursive(n, guess + 1);
}
