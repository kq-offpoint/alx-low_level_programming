#include <stdio.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: is a parameter
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
		while (len > 0)
		{
			putchar(*s);
			s--;
			len--;
		}
	putchar('\n');
}
