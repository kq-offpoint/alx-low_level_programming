#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: the times table to be printed
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, res;

	if (n >= 0 && n <= 15)
	{
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= n; j++)
			{
				int res = i * j;

				if (j == 0)
				{
					printf("%d", res);
				}
				else
				{
					printf(",%3d", res);
				}
			}
			printf("\n");
		}
	}
}
