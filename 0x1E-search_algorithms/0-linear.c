#include "search_algos.h"

/**
  * linear_search - Searches for a value in an array
  * 
  * @array: is a pointer to the first element of the array to search in
  * @size: is the number of elements in array
  * @value: is the value to search for
  * Return: If the value is not present or the array is NULL, -1
  *         is returned, otherwise the index where value is located
  */
int linear_search(int *array, size_t size, int value)
{
    size_t index;

    if (array == NULL)
    {
        return (-1);
    }

    for (index = 0; index < size; index++)
    {
        printf("Value checked array[%lu] = [%d]\n", index, array[index]);
        if (array[index] == value)
        {
            return (index);
        }
    }
    return (-1);
}