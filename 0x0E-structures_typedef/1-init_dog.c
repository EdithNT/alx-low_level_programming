#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: pointer to dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
