#include "search_algos.h"
/**
 * linear_search - for a value sequentially
 * @array: the array of values
 * @size: size of array
 * @value: the value to search for
 * Return: index found at or -1
 */


int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	while (array && idx < size)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       idx, array[idx]);

		if (value == array[idx])
			return ((int)idx);
		idx++;
	}
	return (-1);
}
