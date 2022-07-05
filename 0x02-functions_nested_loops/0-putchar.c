#include "main.h"
#include <stdio.h>

/**
 * main - Prints _putchar.
 *
 * Return: Always 0
 */
int main(void)
{
	char *ch = "_putchar";

	while (*ch)
	{
		putchar(*ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
