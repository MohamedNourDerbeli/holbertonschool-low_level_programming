#include <stdio.h>
/**
 * main - Entry point
 * @argc: integer
 * @argv: char
 * Return: void (Success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
