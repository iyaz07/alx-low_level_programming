#include "main.h"

/**
 * puts2 - Print only one character out of two,
 * starting with the first one
 * @str: input
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;
	int count = 0;
	char *s = str;
	int o;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	count = i - 1;

	for (o = 0 ; o <= count ; o++)
	{
		if (o % 2 == 0)
			_putchar(str[o]);
	}
	_putchar('\n');
}
