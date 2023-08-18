#include "main.h"
#include <ctype.h>

/**
 * print_diagonal - prints a diagonal line in the terminal
 * @n: the number of times the character \ will be printed
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int k, j;

	if (n <= 0)
		_putchar('\n');
	for (k = 0; k < n; k++)
	{
		for (j = 0; j < k; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

