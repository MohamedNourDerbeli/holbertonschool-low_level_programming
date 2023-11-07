#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - Entry point
 * @b : int
 * Return: void (Success)
 */
void *malloc_checked(unsigned int b)
{
	void *check =malloc(b);

	if (check == NULL)
		exit(98);

	return (check);
}
int main(void)
{
    char *c;
    
    c = malloc_checked(sizeof(char) * 1024);
    return (c);
}
