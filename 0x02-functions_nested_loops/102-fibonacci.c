#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program calculates
 * and prints the first 50 Fibonacci numbers
 * in the specified format. It starts
 * with 1 and 2 and continues by adding the
 * previous two numbers in the sequence to generate the next one.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int a = 1, b = 2, next;
	int count;

	printf("%ld, %ld", a, b);
	for (count = 2; count < 50; count++)
	{
		next = a + b;
		printf(", %ld", next);
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}
