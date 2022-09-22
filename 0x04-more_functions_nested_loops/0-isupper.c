#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase character
 * @c: the character to print
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		puts("return 1");
		return (1);
	}
	else
	{
		puts("return 0");
		return (0);
	}
}
