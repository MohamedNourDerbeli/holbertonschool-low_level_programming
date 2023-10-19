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
			for (j = 0; j < size; j++)
			{
				if (j <= size - i -1)
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
	}
	else
	{
		putchar('\n');
	}
}