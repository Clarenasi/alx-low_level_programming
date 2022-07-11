#include "main.h"

/**
 * *_strcpy - copies the string pointed to by by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: a buffer to copy the string to
 * @src: the source string to copy
 *
 * Return: the pointer to the string dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	*(dest + index) = '\0';
	return (dest);
}
