#include <stdio.h>
#include "dog.h"

/**
 * print_dog - A function that prints struct dog.
 *
 * @d: Struct dog.
 */

void print_dog(dog *d)
{
	if (d != 0)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
				(*d).name != 0 ? d->name : "(nil)",
				(*d).age,
				(*d).owner != 0 ? d->owner : "(nil)");
	}
}
