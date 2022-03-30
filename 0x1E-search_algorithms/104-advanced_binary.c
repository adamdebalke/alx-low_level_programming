#include "search_algos.h"

/**
 * recursive_binary - a recursive function that searches for a value
 * @array: pointer to the first element of the array
 * @low: is the lowest index in array
 * @high: is the highest index in array
 * @value: the value to search for
 * Return: return the first index where value is located
 */
int recursive_binary(int *array, size_t low, size_t high, int value)
{
	size_t idx, mid;

	printf("Searching in array: ");
	for (idx = low; idx <= high; idx++)
	{
		printf("%d", array[idx]);
		if (idx < high)
			printf(", ");
	}
	printf("\n");

	mid = (high + low) / 2;
	if (array[mid] == value && array[mid - 1] != value)
		return (mid);
	else if (high == low)
		return (-1);
	else if (array[mid] >= value)
		return (recursive_binary(array, low, mid, value));
	else if (array[mid] < value)
		return (recursive_binary(array, mid + 1, high, value));
	return (-1);
}

/**
 * advanced_binary - searches value in sorted array
 * using advanced Binary search
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located
 * -1 if value not present or array is NULL
 * Prints array being searched every time it changes
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (recursive_binary(array, 0, size - 1, value));
}
