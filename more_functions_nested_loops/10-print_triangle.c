#include <stdio.h>
/**
 * print_triangle - Check description
 * Description: print_diagonal
 * @size : integer
 * Return: void (Success) .
 */
void print_triangle(int size)
{
	int i;
	int j;
	int n;
	

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			n = size - 1;
			for (j = 0; j < size; j++)
			{
				if (j <= n)
				{
					putchar(33);
				}
				else
				{
					putchar(35);
				}
				n--;
				
			}
			putchar('\n');
		}
		n--;
	}
	else
	{
		putchar('\n');
	}
}