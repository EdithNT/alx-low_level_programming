#include "dog.h"
#include <stdlib.h>

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

	if (d == NULL)
		printf("nil")

	if (d->name == NULL)
		printf("Name: (nil)\n", d->name);
	else
		printf("%s\n", d->name);
	if (d->owner == NULL)
		printf("Owner: (nil)\n", d->owner);
	else
		printf("%s\n", d->owner);
	if (d->age == NULL)
		printf("Age: (nil)\n", d->age);
	else
		printf("%d\n", d->age);
}
