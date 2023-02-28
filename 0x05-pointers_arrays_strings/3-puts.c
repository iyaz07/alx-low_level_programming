#include "main.h"
#include <stdio.h>

/**
 * _puts - prints string to the stdout
 * @str: arg
 * Return: return is void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
		_putchar('\n');




}
