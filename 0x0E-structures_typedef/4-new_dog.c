#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
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
n_dog = (dog_t *)malloc(sizeof(dog_t));
if (n_dog == NULL)
return (NULL);

n_dog->name = name;
n_dog->age = age;
n_dog->owner = owner;

return (n_dog);
}
