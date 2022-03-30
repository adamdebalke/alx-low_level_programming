#include "search_algos.h"

/**
 * binary_search - searches value in sorted array using Binary search
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located
 * -1 if value not present or array is NULL
 * Prints array being searched every time it changes
 */
int binary_search(int *array, size_t size, int value)
{
	size_t idx, left, right;

	if (!array || size == 0)
		return (-1);

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		for (idx = left; idx <= right; idx++)
		{
			printf("%d", array[idx]);
			if (idx < right)
				printf(", ");
		}
		printf("\n");

		idx = (left + right) / 2;
		if (array[idx] < value)
			left = idx + 1;
		else if (array[idx] > value)
			right = idx - 1;
		else
			return ((int)idx);
	}
	return (-1);
}
