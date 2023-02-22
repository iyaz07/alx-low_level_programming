#include "main.h"
/**
 *_abs -a programme to compute the absolute value of an integer
 *@c: The parameter
 *Return: Returns result of 0
 */
int _abs(int c)
{
	if (c < 0)
	{
	int abs_value;

	abs_value = c * -1;
	return (abs_value);
	}
	return (c);
}
