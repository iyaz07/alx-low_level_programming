nclude "main.h"

/**
 * _strlen - Counts the length of a string
 * @s: Array of char
 * Return: nothing
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
