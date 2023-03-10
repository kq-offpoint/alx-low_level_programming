#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: number to evaluate
 *
 * Return: 1 if n is positive, 0 of n is zero, -1 if n is negative
 * and print corresponding sign
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
