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
	if (argc < 2)
	{
		return;
	}
	else
	{
		int s1 = atoi(argv[1]);
		int s2 = atoi(argv[2]);

		printf("%d\n", s1 * s2);
	}

	return (0);
}
