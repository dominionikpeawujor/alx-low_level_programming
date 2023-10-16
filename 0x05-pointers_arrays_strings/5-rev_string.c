/**
 * rev_string - Reverses a string in place.
 * @s: A pointer to the string to be reversed.
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char temp;

	if (s != NULL)
	{
		/* Calculate the length of the string */
		while (s[length] != '\0')
			length++;

		/* Swap characters to reverse the string */
		for (i = 0; i < length / 2; i++)
		{
			temp = s[i];
			s[i] = s[length - i - 1];
			s[length - i - 1] = temp;
		}
	}
}

