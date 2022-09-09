#include "search_algos.h"

/**
* linear_search - search algorithm
* @array: set of integers in an array
* @size: size of the array
* @value: matching value to index if found
* Description: Traverse the array input and match each element to value input
* Return: -1 if not found or array is NULL OR index if
*/

int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;
    int value_indx = 0;

    if (array == NULL)
        return (-1);

    while (i < size)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            value_indx = i;
            break;
        }
        else
            value_indx = -1;
        i++;
    }
    return (value_indx);
}