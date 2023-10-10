#ifndef DOG_H
#define DOG_H
/**
 *struct dog - dog's information
 *@name: name of the dog
 *@age: age of the dog
 *@owner: dog's owner
 *
 *Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *dog_t - tiypedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif 
