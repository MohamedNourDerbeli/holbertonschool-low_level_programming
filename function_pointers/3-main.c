#include "3-calc.h"

int main(int argc, char *argv[])
{
	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		get_op_func(argv[2]);
	}
	return(0);
}
