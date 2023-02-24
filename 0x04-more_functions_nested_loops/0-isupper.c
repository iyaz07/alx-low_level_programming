#include "main.h"

/**
* _isupper - check the code for uppercase
* @c: The character to be checked
* Return: return 1 for uppercase or 0 for anything else.
*/
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	return (1);

	return (0);
}
