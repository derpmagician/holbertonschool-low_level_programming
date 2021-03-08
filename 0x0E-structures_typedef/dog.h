#ifndef _DOG_H_
#define _DOG_H_

/**
  * struct dog - Dog attributes
  * @name: His name
  * @age: His age
  * @owner: His owner
  *
  * Description: The attributes of a dog.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef foir dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
