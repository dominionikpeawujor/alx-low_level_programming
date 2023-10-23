#include <stdio.h>

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the result buffer.
 *
 * Returns: A pointer to the result, or 0 if the result cannot fit in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int len1, len2, sum, index1, index2, result_index;

	for (len1 = 0; n1[len1] != '\0'; len1++)
		;

	for (len2 = 0; n2[len2] != '\0'; len2++)
		;

	if (size_r <= len1 || size_r <= len2)
		return (0);

	index1 = len1 - 1;
	index2 = len2 - 1;
	result_index = 0;

	while (index1 >= 0 || index2 >= 0 || carry > 0)
	{
		sum = carry;
		if (index1 >= 0)
			sum += n1[index1] - '0';
		if (index2 >= 0)
			sum += n2[index2] - '0';

		carry = sum / 10;
		r[result_index] = (sum % 10) + '0';

		result_index++;
		index1--;
		index2--;
	}

	r[result_index] = '\0';

	for (result_index = 0; r[result_index] != '\0'; result_index++)
		;

	if (result_index >= size_r)
		return (0);

	return (r);
}
