#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	char *p = s;
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*p)
	{
		int i;

		for (i = 0; *(a + i); i++)
		{
			if (*p == *a(a + i))
			{
				*p = *(b + i);
				break;
			}
		}
		p++;
	}
	return (s);
}
