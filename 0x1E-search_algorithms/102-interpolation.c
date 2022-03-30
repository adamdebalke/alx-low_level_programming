#include "search_algos.h"

/**
 * interpolation_search - searches value in sorted array
 * using Interpolation search
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located
 * -1 if value not present or array is NULL
 * Prints array being searched every time it changes
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	int high = size - 1, low = 0;

	if (!array || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
			return (array[low] == value ? low : -1);
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	pos = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
