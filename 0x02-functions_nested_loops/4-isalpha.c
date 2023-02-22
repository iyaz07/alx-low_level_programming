#include "main.h"
/**
* _islower - check the code.
* @c: The character to be checked
6 * Return: return 1 for lowercase or 0 for anything else.
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
