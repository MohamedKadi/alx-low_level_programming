#include "main.h"
/**
 * _islower - entry point
 * @c: the character to be cheacked
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
