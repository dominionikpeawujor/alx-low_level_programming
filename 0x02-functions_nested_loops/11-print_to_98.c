#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print natural numbers from n to 98
 *
 * Description: This function takes an integer 'n'
 * as input and prints all natural
 * numbers starting from 'n' up to 98, separated by a comma and space.
 * It ensures the numbers are printed in ascending order,
 * with the last number being 98.
 *
 * @n: The starting integer from which the counting begins
 *
 * Return: None (void)
 */
void print_to_98(int n)
{
	while (n != 98) 
	{
		printf("%d, ", n);
		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	}
	printf("98\n");
}
