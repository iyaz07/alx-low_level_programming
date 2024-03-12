#include "search_algos.h"

/**
 * binary_search - This function searches for a value in
 *   a sorted array of integers using the Binary search algorithm.
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: Target key
 *
 * Return: Target index
 */
int binary_search(int *array, size_t size, int value)
{
    int low = 0, high = size - 1, mid;

    if (array == NULL)
        return (-1);

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        printf("Searching in array: ");
        print_array(array, low, high);
        if (array[mid] == value)
            return (mid);
        else if (array[mid] > value)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return (-1);
}			
