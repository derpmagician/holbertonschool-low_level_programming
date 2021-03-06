#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory
 * @d: pointer of s
 * Return: 1
 * On error, -1 is returned,
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
