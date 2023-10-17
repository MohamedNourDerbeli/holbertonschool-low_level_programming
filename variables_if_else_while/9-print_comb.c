#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible combinations of single-digit numbers.
 * Numbers must be separated by commas and a space.
 * You can only use `putchar` to print to the console.
 * You can only use `putchar` up to four times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 48; x < 57; x++)
	{
		putchar(x);
        putchar(' ,');
	}
	putchar('\n');
	return (0);
}
