#include <stdio.h>

/**
 * test - check the code
 *
 * Return: Always 0.
 */
void test(void) __attribute__((constructor));
void test(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
