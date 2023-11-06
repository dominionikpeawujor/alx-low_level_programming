#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The integer to check for primality.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return 0;
	return is_prime_recursive(n, 2);
}

/**
 * is_prime_recursive - Recursive helper function to check for primality.
 * @n: The integer to check for primality.
 * @divisor: The current divisor to check divisibility.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	if (divisor == n)
		return 1;

	if (n % divisor == 0)
		return 0;

	return is_prime_recursive(n, divisor + 1);
}
