#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This program calculates
 * and prints the sum of all the multiples
 * of 3 or 5 below 1024. It uses a loop to
 * iterate through the numbers from 1 to
 * 1023 and checks if each number is a multiple
 * of 3 or 5. If it is, it adds the
 * number to the sum. Finally, it prints the calculated sum.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int limit = 1024;
	int sum = 0;
	int i;
	
	for (i = 1; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
