#include "main.h"

/**
 *swap_int - swaps the values of tw integers
 * @a: - first integer to be swapped
 * @b: - second integer
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
