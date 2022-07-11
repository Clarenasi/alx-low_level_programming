#include "main.h"

/**
 * print_rev - prints a string, in reverse, folowed by a new line
 * @str: sting to be printed in reverse
 */

void print_rev(char *str)
{
	int i = 0;

	while (*(str + i))
		i++;
	i = i - 1;

	while (i >= 0)
	{
		_putchar(*(str + i));
		i--;
	}
	_putchar('\n');
}
