#include "main.h"

/**
 * _isupper - Checks for uppercase character.
 * @c: Test character
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	int isdigit = 0;
	int yesdigit = 0;

	for (; uppercase <= 9; isdigit++)
	{
		if (c == isdigit)
		{
			yesdigit = 1;
			break;
		}
	}

	return (yesdigit);
}
