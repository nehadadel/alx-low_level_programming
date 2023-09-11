#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *new_dog - creates new dog
 *
 *@name: pointer to char
 *@age: float
 *@owner: pointer to char
 *
 *Return: struct dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *n_dog;

if (name == NULL || owner == NULL)
return (NULL);
n_dog = (dog_t *)malloc(sizeof(dog_t));
if (n_dog == NULL)
{
free(n_dog);
return (NULL);
}
n_dog->name = strdup(name);
if (n_dog->name == NULL)
{
free(n_dog);
return (NULL);
}
n_dog->age = age;
n_dog->owner = strdup(owner);
if (n_dog->owner == NULL)
{
free(n_dog->name);
free(n_dog);
return (NULL);
}
return (n_dog);
}
