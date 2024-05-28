#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 *                  integers using the Binary search algorithm
 * 
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: If the value is not present or the array is NULL, -1
 *         otherwise, the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
    size_t index, right, left;

    if (array == NULL)
    {
        return (-1);
    }

    for (left = 0, right = size - 1; right >= left;)
    {
        printf("Searching in array: ");
        for (index = left; index < right; index++)
        {
            printf("%d, ", array[index]);
        }
        printf("%d\n", array[index]);

        index = left + (right - left) / 2;
        if (array[index] == value)
            return (index);
        if (array[index] < value)
            left = index + 1;
        else
            right = index - 1;
    }
    return (-1);
}
