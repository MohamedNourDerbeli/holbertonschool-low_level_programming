#include "function_pointers.h"
/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f : pointer
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size)
	{
		while (size != 0)
		{
		action(array[size-1]);	
		}
		
	}
}
