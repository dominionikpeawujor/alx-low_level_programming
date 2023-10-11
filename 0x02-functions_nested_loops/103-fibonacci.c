#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program calculates and prints the sum of even-valued terms in
 * the Fibonacci sequence up to 4,000,000. It starts with 1 and 2 and continues by
 * adding the previous two numbers to generate the next one. The program stops when
 * a Fibonacci term exceeds 4,000,000 and calculates the sum of even terms.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int a = 1, b = 2, next, sum = 0;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}

		next = a + b;
		a = b;
		b = next;
	}
	printf("%ld\n", sum);
	return (0);
}
