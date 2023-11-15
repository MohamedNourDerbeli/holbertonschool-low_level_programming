#ifndef DOG
#define DOG
#include <stdio.h>

/**
 * struct dog - check the code
 * @name : char
 * @age : float
 * @owner : char
 * @d : p
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
