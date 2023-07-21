#include "main.h"

/**
 * _isdigit - Checks for digit.
 * @c: Test character
 * Return: 1 if uppercase, 0 otherwise
 */
int _isdigit(int c)
{
	int isdigit = '0';
	int yesdigit = 0;

	for (; isdigit <= '9'; isdigit++)
	{
		if (c == isdigit)
		{
			yesdigit = 1;
			break;
		}
	}

	return (yesdigit);
}
