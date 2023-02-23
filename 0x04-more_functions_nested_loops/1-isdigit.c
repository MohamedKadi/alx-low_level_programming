#include "main.h"

/**
 * _isdigit - entry point
 * @a: the num to be checked
 * Return: 0
 */

int _isdigit(int a)

{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	return (0);
}
