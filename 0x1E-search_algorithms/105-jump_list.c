#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches value in sorted list using jump search
 * @list: pointer to the head of the list
 * @size: number of nodes in the list
 * @value: value to search for
 *
 * Return: index where value is located
 * NULL if value not present or head is NULL
 * Prints the value at each comparaison
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int block, idx;
	listint_t *cur, *prev;

	if (!list)
		return (NULL);

	block = sqrt(size);
	idx = block;
	cur = list;
	while (cur->n < value && cur->next)
	{
		prev = cur;
		for (idx = block; idx && cur->next; idx--, cur = cur->next)
			;
		printf("Value checked at index [%lu] = [%d]\n",
		       cur->index, cur->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev->index, cur->index);

	cur = prev;
	while (cur->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       cur->index, cur->n);

		if (cur->next)
			cur = cur->next;
		else
			return (NULL);
	}
	if (cur->n == value)
		return (printf("Value checked at index [%lu] = [%d]\n",
			       cur->index, cur->n), cur);
	return (NULL);
}
