#include "3-calc.h"
/**
 * main - check the code
 *
 * @argc: int
 * @argv: int
 * Return: 0
 */
int main(int argc, char **argv)
{
	int (*result)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	result = get_op_func(argv[2]);
	if (!result)
		printf("Error\n"), exit(99);

	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", result(a, b));
	return (0);
}
