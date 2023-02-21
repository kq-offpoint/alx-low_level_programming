#include "main.h"

/**
 *  _isalpha - checks for upper case characters
 *  @c: the character to be checked 
 *
 *  Return: 1 if c is upper case, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
