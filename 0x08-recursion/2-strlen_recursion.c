#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: A pointer to the string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return 0;
}