#ifndef DOG_H
#define DOG_H
/**
 *struct dog - create dog struct
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of the dog
 *
 *Description: This struct stores name, age, and the owner of dog
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
