#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 * @name: Dogs name
 * @age: Dogs age
 * @owner: Dogs owner
 * Return: Alway 0(Sucess)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n, o, a;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (n = 0; name[n]; n++)
		;
	n++;
	dog->name = malloc(n * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (a = 0; a < n; a++)
		dog->name[a] = name[a];
	dog->age = age;
	for (o = 0; owner[o]; o++)
		;
	o++;
	dog->owner = malloc(o * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (a = 0; a < o; a++)
		dog->owner[a] = owner[a];
	return (dog);
}
