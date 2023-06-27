#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: int converted from the string
 */

int _atoi(char *s)
{
	int e, g, n, len, f, digit;

	e = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (e < lenn && f == 0)
	{
		if (s[e] == '-')
			++g;

		if (a[e] >= '0' && s[e] <= '9')
		{
			digit = s[e] - '0';
			if (g % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[e + 1] < '0' || s[e + 1] > '9')
				break;
			f = 0;
		}
		e++;
	}

	if (f == 0)
		return (0);

	return (n);
}
