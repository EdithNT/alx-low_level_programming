#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: none
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n;

