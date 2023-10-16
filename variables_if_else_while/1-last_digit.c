#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  "This program will assign a random number
 *              to the variable n each time it is executed.
 *
 * Return: Always 0.
 */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int lsd = n % 10;
if (lsd>5)
{
printf("Last digit of %d is %i and is greater than 5\n",n,lsd);
}
else if (lsd  ==0)
{
printf("Last digit of %d is %i and is 0\n",n,lsd);        
}
else
{
printf("Last digit of %d is %i and is less than 6 and not 0\n",n,lsd);
}
    
return (0);
}
