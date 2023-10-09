#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers,
 * separated by a comma and space, in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 1; num2 < 10; num2++)
		{
			if (num1 >= 9)
			{
				continue;
			}
			if (num1 > 1)
			{
				if (num2 > num1)
				{
					continue;
				}
				else if (num1 == num2)
				{
					continue;
				}
			}
			putchar('0' + num1);
			putchar('0' + num2);
			putchar(',');
			putchar(' ')
		}
	}
	putchar('\n');
	return (0);
}
