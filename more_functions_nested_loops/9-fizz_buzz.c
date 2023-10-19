#include <stdio.h>
/**
 * main - Check description
 * Description: print_diagonal
 * Return: void (Success) .
 */

int main(void)
{
    int i;
    for (i = 0; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 5)
        {
            printf("FizzBuzz");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz");
        }
        printf (i);
    }
    return (0);
}
