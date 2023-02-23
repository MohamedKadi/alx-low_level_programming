#include "main.h"

/**
 * print_numbers - entry point
 * Return: 0
 */

void print_numbers(void)
{
	int x = 0;

	while (x <= 9)
	{
		x++;
		_putchar(x++);
	}
	_putchar('\n');
}
