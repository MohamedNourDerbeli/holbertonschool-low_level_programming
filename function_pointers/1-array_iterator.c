#include "function_pointers.h"
/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f : pointer
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	while (action < size)
	{
		action(array);
		size--;
	}
}
