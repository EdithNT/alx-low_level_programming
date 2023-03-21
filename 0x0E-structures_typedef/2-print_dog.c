#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to dog
 *
 * Description: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return (NULL);

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("%s\n", d->name);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("%s\n", d->owner);
	if (d->age == NULL)
		printf("Age: (nil)\n");
	else
		printf("%d\n", d->age);
}
