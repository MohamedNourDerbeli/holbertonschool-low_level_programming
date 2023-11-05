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
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = sizeof(coins) / sizeof(coins[0]);
	int coinCount = 0;
	int i = 0;
	int cents;

	if (argc !=2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents > 0 && i < numCoins)
	{
		int currentCoin = coins[i];

		if (cents >= currentCoin)
		{
			int numUsed = cents / currentCoin;

			coinCount += numUsed;
			cents -= numUsed * currentCoin;
		}
		i++;
	}

	printf("%d\n", coinCount);

	return (0);
}
