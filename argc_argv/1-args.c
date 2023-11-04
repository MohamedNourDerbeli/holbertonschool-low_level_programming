#include <stdio.h>
/**
 * main - Entry point
 * @argc: integer
 * @argv: char
 * Return: void (Success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int count ;

	for (count = 0; count < argc; count++)
	{
		if (count !=argc)
		{
			printf("%d", count);
		}
	}
	return (0);
}
