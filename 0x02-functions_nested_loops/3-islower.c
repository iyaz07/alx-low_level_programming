#include "main.h"

/**
 * _islower - Check Description
 * @c: Character to be tested
 * Decription: Checks for lowercase
 * Return: 1 if lowercase or 0 if uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
