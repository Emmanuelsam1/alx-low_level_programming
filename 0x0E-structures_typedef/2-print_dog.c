#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints struct dog
 * @d: the new dog type struct
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("name: (nill)\n");
		else
			printf("name: %s\n", d->name);
		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("owner: (nill)\n");
		else
			printf("owner: %s\n", (d->owner));

	}
}
