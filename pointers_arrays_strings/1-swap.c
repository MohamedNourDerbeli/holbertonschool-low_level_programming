/**
 * swap_int - check the code
 * @a : integer
 * @b : integer
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
