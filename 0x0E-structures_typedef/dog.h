#include <stdio.h>

/**
 * struct dog - Structure for information about a dog.
 * @name: Name of the dog (string).
 * @age: Age of the dog (float).
 * @owner: Owner of the dog (string).
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for the struct dog type.
 */
typedef struct dog dog_t;
