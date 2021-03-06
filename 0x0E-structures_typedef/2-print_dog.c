#include "dog.h"
#include <stdio.h>


/**
 * print_dog - function that prints a struct dog
 * @d: the dog struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";

		if (d->owner == NULL)
			d->owner = "(nil)";

		printf("Name: %s\nAge: %.6f\nOwner: %s\n",
				d->name, d->age, d->owner);
	}
}
