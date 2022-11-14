#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dogs
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d_dog;
	int i, tname, downer;

	d_dog = malloc(sizeof(*d_dog));

	if (d_dog == NULL || !(name) || !(owner))
	{
		free(d_dog);
		return (NULL);
	}
	for (tname = 0; name[tname]; tname++)
		;

	for (downer = 0; owner[downer]; downer++)
		;

	d_dog->name = malloc(tname + 1);
	d_dog->owner = malloc(downer + 1);
	if (!(d_dog->name) || !(d_dog->owner))
	{
		free(d_dog->owner);
		free(d_dog->name);
		free(d_dog);
		return (NULL);
	}
	for (i = 0; i < tname; i++)
	{
		d_dog->name[i] = name[i];
	}
	d_dog->name[i] = '\0';

	d_dog->age = age;

	for (i = 0; i < downer; i++)
		d_dog->owner[i] = owner[i];
	d_dog->owner[i] = '\0';

	return (d_dog);
}
