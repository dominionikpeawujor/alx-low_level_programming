#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: A pointer to the string to check for palindrome.
 *
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);
	return check_palindrome(s, 0, length - 1);
}

/**
 * check_palindrome - Recursive helper function to check for palindrome.
 * @s: A pointer to the string to check.
 * @start: The index of the first character to check.
 * @end: The index of the last character to check.
 *
 * Return: 1 if s is a palindrome, 0 if not.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return 1;

	if (s[start] == s[end])
		return check_palindrome(s, start + 1, end - 1);

	return 0;
}
