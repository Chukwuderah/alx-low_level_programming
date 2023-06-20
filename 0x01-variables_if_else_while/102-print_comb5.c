#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int r, s;

	for (r = 0; r < 100; r++)
	{
		for (s = 0; s < 100; s++)
		{
			if (r < s)
			{
				putchar((r / 10) + 48);
				putchar((r % 10) + 48);
				putchar(' ');
				putchar((s / 10) + 48);
				putchar((s % 10) + 48);
				if (r != 98 || s != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
