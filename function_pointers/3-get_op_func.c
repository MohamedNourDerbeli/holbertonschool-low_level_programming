#include "3-calc.h"

op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}};
int (*get_op_func(char *s))(int, int)
{
	int i=0;
	
	if (ops)
	{
	while (s != ops)
	{
		ops[i];
		i++;
	}
	}

	
}
