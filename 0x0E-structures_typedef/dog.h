#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog - information about dog
* @name: name of the dog
* @age: age of dog
* @owner: owner of dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* _DOG_H_ */