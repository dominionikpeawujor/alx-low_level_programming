#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Print all the minutes in a day
 *
 * Description: This function generates and prints all the minutes in a 24-hour
 * day in the "HH:MM" format. It goes through all the possible hours (00 to 23)
 * and minutes (00 to 59) combinations and prints them to the standard output.
 *
 * Return: None (void)
 */
void jack_bauer(void)
{
	int hours, mins;
	
	for (hours = 0; hours < 24; hours++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			char hours_tens = (hours < 10) ? '0' : '0' + (hours / 10);
			char hours_ones = '0' + (hours % 10);
			char mins_tens = (mins < 10) ? '0' : '0' + (mins / 10);
			char mins_ones = '0' + (mins % 10);
			
			putchar(hours_tens);
			putchar(hours_ones);
			putchar(':');
			putchar(mins_tens);
			putchar(mins_ones);
			putchar('\n');
		}
	}
}
