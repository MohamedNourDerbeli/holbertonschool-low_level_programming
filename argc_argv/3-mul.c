#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: integer
 * @argv: char
 * Return: void (Success)
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int s1 = atoi(argv[1]);
	int s2 = atoi(argv[2]);

	if (s2 == NULL)
	{
		return;
	}
	else
		printf("%d\n", s1 * s2);

	return (0);
}
