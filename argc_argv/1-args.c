#include <stdio.h>
/**
 * main - Entry point
 * @argc: integer
 * @argv: char
 * Return: void (Success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		if (i == argc)
		{
			printf("%d\n", i);
		}
	}

	return (0);
}
