#include <stdio.h>
#include "main.h"

void print_diagonal(int n)
{
	char space = ' ';
	int i;

	if (n == 0)
	{
		_putchar('\n');
		return;
	}

	for (i = n; i < n; i++)
	{
		space *= n;
		_putchar(space);
		_putchar('\\');
		_putchar('\n');
	}
}
