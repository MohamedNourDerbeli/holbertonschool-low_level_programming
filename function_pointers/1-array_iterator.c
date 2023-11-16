#include "function_pointers.h"
/**
 * array_iterator - prints a name as is
 * @array: name of the person
 * @size : pointer
 * @action : pointer
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
