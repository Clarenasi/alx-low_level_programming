#include "main.h"
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int ch;

	for (ch = 'a'; 'a' <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
