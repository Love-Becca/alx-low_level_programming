#include "dog.h"

/**
 * init_dog - function that intialize struct
 * @d: dog alias
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{

		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
