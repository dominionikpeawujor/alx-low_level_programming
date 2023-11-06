#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

/**
 * new_dog - Creates a new dog and returns a pointer to it.
 * @name: Name of the new dog.
 * @age: Age of the new dog.
 * @owner: Owner of the new dog.
 *
 * Return: A pointer to the new dog, or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;

	new_dog = malloc(sizeof(dog_t));
	
	if (new_dog == NULL)
		return NULL;

	name_copy = strdup(name);
	owner_copy = strdup(owner);

	if (name_copy == NULL || owner_copy == NULL)
	{
		free(new_dog);
		free(name_copy);
		free(owner_copy);
		return NULL;
	}

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return new_dog;
}

/**
 * free_dog - Frees a dog.
 * @d: A pointer to the dog to be freed.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

int main(void)
{
	dog_t *my_dog = new_dog("Buddy", 3.5, "John");

	if (my_dog == NULL)
	{
		printf("Failed to create a new dog.\n");
		return 1;
	}

	printf("Name: %s\n", my_dog->name);
	printf("Age: %.1f\n", my_dog->age);
	printf("Owner: %s\n", my_dog->owner);

	free_dog(my_dog);

	return 0;
}
