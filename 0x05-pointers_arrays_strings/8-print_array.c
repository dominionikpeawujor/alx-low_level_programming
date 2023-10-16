#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: A pointer to the array of integers.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
    if (a != NULL)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d", a[i]);
            if (i < n - 1)
                printf(", ");
        }
        printf("\n");
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 3; // Number of elements to print

    print_array(arr, n);

    return 0;
}

