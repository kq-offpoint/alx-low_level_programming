#include <stdio.h>
#include "main.h"

/**
 * _strcat -  Concatenates two strings
 * @dest: destination string
 * @src: the source string
 *
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* move ptr to the end of dest string */
	while (*ptr != '\0')
		ptr++;

	/* Copy src string to the end of the dest string */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* add terminal null byte */
	*pte = '\0';

	return (dest);
}
