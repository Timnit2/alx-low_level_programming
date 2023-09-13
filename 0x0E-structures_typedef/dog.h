#ifndef DEFINING_H
#define DEFINING_H
/**
 * struct dog - description dog
 * @name: pointer to the name of the dog
 * @age: age of the dolg
 * @owner: the owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
/**
 * dog_t - new defining
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
