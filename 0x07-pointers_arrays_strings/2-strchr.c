#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: input
 * @c: input
 * Return: 0 (Success)
 */

char *_strchr(char *s, char c)
{
int a = 0;

for (a = 0; s[a] >= '\0'; a++)
{
if (s[a] == c)
return (&s[a]);
}
return (0);
}
