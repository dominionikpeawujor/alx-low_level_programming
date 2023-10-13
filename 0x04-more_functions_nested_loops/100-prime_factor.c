#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
	int i;
	long int number;
	number = 612852475143;

	for (i = 2; i < number; i++)
	{
		while (number % i == 0)
		{
			number /= i;
		}
	}
	printf("%ld", number);
	printf("\n");
	return (0);
}
