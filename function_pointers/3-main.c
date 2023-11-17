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
		int a = atoi(argv[1]);
		int b = atoi(argv[3]);
		char s = argv[2];
		f(a,b);
		get_op_func(s);
	}
	
}
