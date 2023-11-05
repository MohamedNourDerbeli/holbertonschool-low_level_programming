#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: integer
 * @argv: char
 * Return: void (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 2 || argc == 1 )
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return(0);
	}
	
	if (atoi(argv[1]) % 25 ==0 )
	{
		printf("%d\n",atoi(argv[1]) / 25 );
	}
	else if (atoi(argv[1]) % 10 ==0 )
	{
		printf("%d\n",atoi(argv[1]) / 10 );
	}
	else if (atoi(argv[1]) % 5 ==0 )
	{
		printf("%d\n",atoi(argv[1]) / 5 );
	}
	else if (atoi(argv[1]) % 2 ==0 )
	{
		printf("%d\n",atoi(argv[1]) / 2 );
	}
	else if (atoi(argv[1]) % 1 ==0 )
	{
		printf("%d\n",atoi(argv[1]) / 1 );
	}
	return(0);
}
