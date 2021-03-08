#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - New entry
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: Pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int cdogn = 0, cdogo = 0, c;
	dog_t *p;

	if (name == NULL || owner == NULL)
		return (NULL);

	p = malloc(sizeof(dog_t));

	if (p == NULL)
		return (NULL);

	while (name[cdogn])
		cdogn++;
	while (owner[cdogo])
		cdogo++;

	p -> name = malloc(sizeof(char) * (cdogn + 1));

	if (p -> name == NULL)
	{
		free(p);
		return (NULL);
	}

	p -> age = age;
	p -> owner = malloc(sizeof(char) * (cdogo + 1));

	if (p -> owner == NULL)
	{
		free(p -> name);
		free(p);
		return (NULL);
	}

	for (c = 0; c <= cdogn; c++)
		p->name[c] = name[c];
	for (c = 0; c <= cdogo; c++)
		p->owner[c] = owner[c];
	return (p);
}
