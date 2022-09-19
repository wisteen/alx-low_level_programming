#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 1
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 19);
	return (1);
}
