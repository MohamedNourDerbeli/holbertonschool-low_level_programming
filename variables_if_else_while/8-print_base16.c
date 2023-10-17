#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
	int t;
	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	for (t = 97; t < 103; t++)
	{
		putchar(t);
	}
	return (0);
}
