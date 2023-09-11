#include <stdio.h>

/**
 * main - The entry point
 *
 * Return - Always (0)
 */
int main(void)
{
	char k;

	for (k = 'a' ; k <= 'z' ; k++)
		putchar(k);
	for (k = 'A' ; k <= 'Z' ; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
