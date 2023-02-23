#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: character being checked
 * Return: 1 if c us uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
