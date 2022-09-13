#include <stdio.h>
/**
 * main - Prints "_putchar" followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		putchar(*sh);
		sh++;
	}
	putchar('\n');

	return (0);
}
