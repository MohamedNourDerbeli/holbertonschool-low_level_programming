#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: integer
 * @argv: char
 * Return: void (Success)
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		/* int result = 0;*/
		int i;
		int result = 0;

		for (i = 1; i < argc; i++)
		{
			int leng = strlen(argv[i]);
			int j;

			for (j = 0; j < leng; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
