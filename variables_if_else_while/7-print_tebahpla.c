#include <stdio.h>
/**
 * main -  "program that prints the alphabet
 *              in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */

/* betty style doc for function main goes there */
int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
	
		putchar(ch);
	putchar('\n');
	return (0);
}
