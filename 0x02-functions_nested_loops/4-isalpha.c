#include "main.h"
/**
 * _isalpha - entry point
 *@a: the character check
 * Return: 0
 */

int _isalpha(int a)

{

	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
	{
	return (1);
	}
	return (0);
}
