#include "main.h"

/**
 * _memcpy - a functuon that copies memory address
 * @src: pointer to the source of data to be copies
 * @dest: pointer to the destination array where the data is copied
 * @n: number of bytes to be copied
 *
 * Return: Pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
