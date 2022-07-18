#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: number of bytes to copy
 * @src: memory area to copy
 * @dest: destination of copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		*(dest + index) = *(src + index);
	}
	return (dest);
}
