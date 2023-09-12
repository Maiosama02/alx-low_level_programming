#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct
 * @name: dog name
 * @age: doge age
 * @owner: dog owner
 * Description: a dog struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
