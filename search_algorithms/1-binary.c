#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array using binary search.
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index of @value in @array if found, or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	int R = size, L = 0, mid;

	while (L <= R)
	{
		mid = ((L + R) / 2);
		if (array[mid] < value)
			L = mid + 1;
		else if (array[mid] > value)
			R = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
