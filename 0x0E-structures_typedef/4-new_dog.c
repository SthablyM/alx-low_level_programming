#include "dog.h"
#include <stdlib.h>
/**
 *_strlen - return the length
 *@s: string
 *
 * Return: the length
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 *_strcpy - copies the string point to by src
 *including the terminated null byte (\0)
 *to the buffer point to by dest
 *@dest: pointer
 *@src: string to be coppied
 *
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - function tha creates a new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: returns a pointer to newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));

			if (dog->name == NULL)
			{

				free(dog);
				return (NULL);
			}
			dog->owner = malloc(sizeof(char) * (len2 + 1));
			if (dog->owner == NULL)
			{
				free(dog);
				free(dog->name);
				return (NULL);
			}
			_strcpy(dog->name, name);
			_strcpy(dog->owner, owner);
			dog->age = age;

			return (dog);
}
