#include <limits.h>  // For INT_MIN and INT_MAX
#include <stdbool.h> // For the boolean data type

/**
 * _atoi - Converts a string to an integer.
 * @s: A pointer to the string to be converted.
 *
 * Return: The integer value extracted from the string.
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1; // Default sign is positive
    bool found_number = false;

    if (s != NULL)
    {
        while (*s)
        {
            if (*s == '-' && !found_number)
                sign = -sign; // Handle negative sign
            else if (*s == '+' && !found_number)
                sign = sign; // Handle positive sign
            else if (*s >= '0' && *s <= '9')
            {
                found_number = true;
                // Check for overflow
                if ((result > INT_MAX / 10) || (result == INT_MAX / 10 && (*s - '0') > (INT_MAX % 10))
                {
                    return (sign == 1) ? INT_MAX : INT_MIN;
                }
                // Update the result
                result = result * 10 + (*s - '0');
            }
            else if (found_number)
            {
                break; // Stop if a non-numeric character is encountered after numbers
            }
            s++;
        }
    }

    return (result * sign);


