#include "search_algos.h"

/**
 * _binary_search - searches value in sorted array
 * using Binary search, related to exponential search
 * @array: pointer to first element of array
 * @mid: left boundary
 * @end: right boundary
 * @value: value to search for
 *
 * Return: index where value is located
 * -1 if value not present or array is NULL
 * Prints array being searched every time it changes
 */
int _binary_search(int *array, size_t mid, size_t end, int value)
{
	size_t idx;

	while (array && mid <= end)
	{
		printf("Searching in array: ");
		for (idx = mid; idx <= end; idx++)
		{
			printf("%d", array[idx]);
			if (idx < end)
				printf(", ");
		}
		printf("\n");

		idx = (mid + end) / 2;
		if (array[idx] < value)
			mid = idx + 1;
		else if (array[idx] > value)
			end = idx - 1;
		else
			return ((int)idx);
	}
	return (-1);
}

/**
 * exponential_search - searches for value in sorted array using Exponential
 * @array: pointer to  first element of array
 * @size: number of elements in array
 * @value: value being searched
 *
 * Return: first index where value found
 * -1 if value not found or NULL array
 *  Prints every time value in array compared to search value
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, end;

	bound = 1;
	if (size == 0)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	end = bound < size - 1 ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
	       bound / 2, end);
	return (_binary_search(array, bound / 2, end, value));
}
