#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: the destination string.
 * @src: the source string.
 * @n: the maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/* move ptr to end of dest string */
	while (*ptr != '\0')
		ptr++;

	/* copy at most n bytes of src string to the end of dest string */
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	/* add terminating null */
	*ptr = '\0';

	return (dest);
}
