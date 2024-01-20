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
	int R = size - 1, L = 0, mid;
	int i;

	if (array == NULL)
		return (-1);
	while (L <= R)
	{
		mid = L + (R - L) / 2;
		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			printf("%d", array[i]);
			if (i < R)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			L = mid + 1;
		else
			R = mid - 1;
	}
	return (-1);
}
