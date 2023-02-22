#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	long fib1 = 1, fib2 = 2 next;

	printf("%1d, %1d", fib1, fib2);

	for (i = 3; i <= 50; i++)
	{
		next = fib1 + fib2;
		printf(", %1d", next);
		fib1 = fib2;
		fib2 = next;
	}
	printf("\n");

	return (0);
}
