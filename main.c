#include <stdio.h>

/**
 * main - This is the function that gets exercuted
 *
 * Return - This always return zero
 */

int main(void)
{
	int m[] = {2,4,6,5,7};
	printf("%p\n", m);
	printf("%p\n",&m[0]);

	printf("%d\n",m[0]);

	printf("%d\n",*m);
	
	return (0);
}
