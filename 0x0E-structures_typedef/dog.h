#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - information about dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

int _putchar(char);
#endif /* _DOG_H_ */
