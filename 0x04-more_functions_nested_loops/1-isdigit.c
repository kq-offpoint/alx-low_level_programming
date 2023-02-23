#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: the digit being checked
 * Return: 1 if c is a digit. otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
