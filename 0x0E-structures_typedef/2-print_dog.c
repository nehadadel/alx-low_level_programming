#include "dog.h"
#include <stdlib.h>
<stdio.h>
/**
 *print_dog - print info of dog 
 *
 *@d: struct dog
*/
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name != NULL)
printf("Name: %s\n",d->name);
else
printf("Name: (nil)");

printf("Age: %f\n",d->age);
if (d->owner != NULL)
printf("Owner: %s\n",d->owner);
else
printf("Owner: (nil)");
}
}
