#include <stdlib.h>
#include "main.h"
/**
 * main - entry point
 * @argc: number of arguments passed
 * @argv: an array containing the arguments passed
 *
 * Return: 0 if successful. 1 if error occured
 */
int main(int argc, char **argv)
{
	int sum = 1, i, j;

	if (argc == 1)
	{
		_putchar("0\n");
		return (0);
	}

	for (i = 1 ; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				_puchar("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	_putchar("%d\n", sum);
	return (0);
}
