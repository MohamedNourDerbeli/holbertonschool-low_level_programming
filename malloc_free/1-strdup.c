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
	int i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * i);
	while (str[i] != '0')
	{
		i++;
		return("%s",str[i]);
	}

	
	return(0);
}
