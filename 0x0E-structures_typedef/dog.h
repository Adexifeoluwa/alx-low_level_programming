#ifndef _DOG_H_
#define _DOG_H_
#include<stdio.h>

/**
 * struct dog - a struct that create information for a dog
 * @name: This is the name of the dog
 * @age: This is the dog age
 * @owner: This is the owner of the dog
 * Description: first struct with ALX
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
