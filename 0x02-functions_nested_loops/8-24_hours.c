#include <stdio.h>
#include "main.h"

void jack_bauer(void)
{
	int i, j, hours, mins;

	for (i = 0; i <24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			(i < 10)? hours = '0' + i : hours = i;
			(j < 10)? mins = '0' + j : mins = j;
			_putchar(hours);
			_putchar(':');
			_putchar(mins);
		}
	}
}
