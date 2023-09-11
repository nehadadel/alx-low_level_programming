#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *free_dog - frees dogs
 *
 *@d: dog_t type
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d);
if (d->name != NULL)
free(d->name);
if (d->owner != NULL)
free(d->owner);
}
}
