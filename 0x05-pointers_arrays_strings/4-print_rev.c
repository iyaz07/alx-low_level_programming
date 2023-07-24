#include "main.h"

/**
 * print_rev - writes the character c to stdout
 * @s: The string to reverse
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_rev(char *s)
{
	int i = 0;
	int o;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	s--;
	for (o = i; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
