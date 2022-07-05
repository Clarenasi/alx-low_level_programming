#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: x10 a-z.
 */
void print_alphabet_x10(void)
{
	int ch;
	int a = 1;

	do {
		for (ch = 'a'; 'a' <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	} while (a <= 10);
}
