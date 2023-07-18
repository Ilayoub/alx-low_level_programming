#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - the function initializes a variable of type struct dog
 * @dog: the pointer to struct dog to initialize
 * @name: the name to initialize
 * @age: the age to initialize
 * @owner: the owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (dog == NULL)
		dog = malloc(sizeof(struct dog));
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
}
