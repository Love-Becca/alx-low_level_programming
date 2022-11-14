#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct
 * @name: struct element
 * @age: struct element
 * @owner: struct element
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
