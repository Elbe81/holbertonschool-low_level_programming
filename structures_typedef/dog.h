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

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /* DOG_H */
