#include "dog.h"
#include <stdlib.h>
#include<stdio.h>

/**
 *init_dog - this is the new dog struct whosr variable is to be initialized
 *@d: The pointer to the struct of the new dog
 *@name: name of the neww dog
 *@age: age of the dog
 *@owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
