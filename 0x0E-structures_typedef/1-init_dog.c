#include <stdio.h>
#include <stddef>
/**
 * init_dog - struct dog
 * struct dog - file of the dog
 * @d: pointer
 * @name: name of the dog
 * @age: that hold age of the dog
 * @owner: that hold name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
