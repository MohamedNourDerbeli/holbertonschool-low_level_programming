#include "function_pointers.h"
/**
 * array_iterator - prints a name as is
 * @array: name of the person
 * @size : pointer
 * @action : pointer
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	{
		if (cmp(array[i]))

			return (i);
	}
	return (-1);
}
