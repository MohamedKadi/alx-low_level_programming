#include "main.h"

/**
 * _isupper - entry point.
 * @a: the num to be checked
 * Return: Always 0.
 */

int _isupper(int a)

{
	if (a > 64 && a < 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
