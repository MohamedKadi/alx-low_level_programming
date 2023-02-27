#include "main.h"
#include <stdio.h>

/**
 * swap_int - entry point
 * @a: first num
 * @sec num
 * Return:0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	
	*b = *temp;
}
