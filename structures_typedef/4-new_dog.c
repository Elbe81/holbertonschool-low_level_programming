#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - To create a new dog.
 * new_dog - Function to create a new dog.
 * @name: variable as a pointer.
 * @age: variable as a parameter.
 * @owner: variable as a pointer.
 *
 * Return: To new dog
 */

struct dog

{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}

	newDog->name = strdup(name);
	newDog->owner = strdup(owner);

	if (newDog->name == NULL || newDog->owner == NULL)

	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}

	newDog->age = age;

	return (newDog);
}
