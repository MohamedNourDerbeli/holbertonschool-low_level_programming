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

		char s = atoi(argv[2]);
	get_op_func(s);
	

	}
	
}
