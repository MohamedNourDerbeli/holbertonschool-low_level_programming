#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Entry point
 * @str : char
 * Return: void (Success)
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	str = malloc(sizeof(char));
	return (str);
}
