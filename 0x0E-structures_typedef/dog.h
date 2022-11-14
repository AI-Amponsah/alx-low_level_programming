#ifndef HEADER_FILE
#define HEADER_FILE dog.h
/**
 * struct dog - Define a new struct dog with name, age, owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of dog
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
