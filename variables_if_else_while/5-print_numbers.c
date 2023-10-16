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
for (int i = 0; i < 10; i++) {
putchar(i + '0'); // Convert the number to its character representation
putchar('\n');
return (0);
}
