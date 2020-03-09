#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct defining dog elements
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: struct that stores the name, age, and owner of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#define dog_t struct dog

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif /*  _DOG_H_  */
