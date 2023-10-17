#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>
/**
* struct dog - this descripction about which dog
* @name: sdfasdf
* @age:  asdfas
* @owner:  asdf
*/

struct dog
{
	char *n;
	float a;
	char *o;
};
typedef struct dog dog_t;
dog_t *new_dog(char *n, float a, char *o);
void init_dog(struct dog *d, char *n, float a, char *o);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif /* DOG_H */
