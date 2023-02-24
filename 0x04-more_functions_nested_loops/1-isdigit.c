#include "main.h"

/**
* _isdigit - check the code for digit 0 - 9
* @c: The character to be checked
* Return: return 1 for instanc of a digit or 0 for anything else.
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
