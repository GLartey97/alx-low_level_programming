#ifndef STRUCT_DOG_H
#define STRUCT_DOG_H

/**
 * struct dog - dog details
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: This a structure created to define the object dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog_t;

void init_dog(struct dog * d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
