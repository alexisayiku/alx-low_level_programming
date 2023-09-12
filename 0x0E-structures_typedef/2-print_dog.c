#include <stdio.h>
#include "dog.h"
/**
* print_dog -this is where the prints content of struct dog.
* @d: this is where the pointer to the struct
* Return: content.
*/
void print_dog(struct dog *d)
{
if (d)
{
if (!d->name)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
if (!d->owner)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
}
