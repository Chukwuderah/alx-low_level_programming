#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - Creates new dog
 * @name: Name of the dog
 * @age: The dog's age
 * @owner: The owner of the dog
 * Return: Nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *rex_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		rex_dog = malloc(sizeof(dog_t));

		if (rex_dog == NULL)
			return (NULL);

		rex_dog->name = malloc(sizeof(char) * name_l);

		if (rex_dog->name == NULL)
		{
			free(rex_dog);
			return (NULL);
		}

		rex_dog->owner = malloc(sizeof(char) * own_l);

		if (rex_dog->name == NULL)
		{
			free(rex_dog->name);
			free(rex_dog);
			return (NULL);
		}

		rex_dog->name = _strcpy(rex_dog->name, name);
		rex_dog->owner = _strcpy(rex_dog->owner, owner);
		rex_dog->age = age;
	}

	return (rex_dog);
}

/**
 * _strlen - Returns the length of a string
 * @s: string to count
 * Return: string length
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s != '\0'; s++)
	{
		a++;
	}

	return (a);
}

/**
 * _strcpy - Copies a string
 * @dest: Destination value
 * @src: source value
 * Return: Tehe pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';
	return (dest);
}
