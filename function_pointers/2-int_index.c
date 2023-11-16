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
	if (array == NULL)
	{
		return(-1);
	}
	if (size <= 0)
	{
		return(-1);
	}
	return((*cmp)(array[size]));
}
