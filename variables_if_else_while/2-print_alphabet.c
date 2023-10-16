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
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch); 
return (0);
}
