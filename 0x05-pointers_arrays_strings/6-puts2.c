#include "main.h"

/**
 * puts2 - prints characters in a string
 * @str: string
 * Return: nothing
 */

void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
