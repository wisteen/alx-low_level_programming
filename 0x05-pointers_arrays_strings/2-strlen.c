#include "main.h"
#include <stdlib.h>

/*
* _strlen - The function returns the length of a
* string
* Return: the lenth of a string
* @s: The string
*/

int _strlen(char *s)
{

	int i;
	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
