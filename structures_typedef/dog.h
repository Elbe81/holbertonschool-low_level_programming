#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure to declare elements for a dog.
 * @name: Declared variable for struct.
 * @age: Declared variable for struct.
 * @owner: Declared variable for struct.
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* DOG_H */
