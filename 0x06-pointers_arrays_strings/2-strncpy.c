#include "main.h"
/**
 * _strncpy - copie the string
 * @dest: array that returns
 * @src: the pointer that receive the string
 * @n: times to interate
 *
 * Return: the parameter dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

