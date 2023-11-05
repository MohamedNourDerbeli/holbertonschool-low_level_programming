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
	while (str[i] != '0')
	{
		i++;
	}
	str = malloc(sizeof(char) * i);

	printf("%s",str);
}
