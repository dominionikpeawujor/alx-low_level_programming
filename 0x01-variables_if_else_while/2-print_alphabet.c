#include <stdio.h>

int main(void) /*A function that prints out alphabets in lowercase*/
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}

