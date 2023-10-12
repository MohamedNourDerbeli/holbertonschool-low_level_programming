/*
 * File: 6-size.c
 */

#include <stdio.h>

/**
 * main -  "C program that prints the size of various
 *                types on the computer it is compiled and run on.
 *
 * Return: Always 0.
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;
	long long int llgintType;
	long int longintType;
	// sizeof evaluates the size of a variable
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of a int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llgintType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
