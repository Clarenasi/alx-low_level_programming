#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power y
 * @x: an integer
 * @y: power to raise x to
 *
 * Return: if y < 0 return -1
 *         if y > 0 return 1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	x *= _pow_recursion(x, y - 1);

	return (x);
}
