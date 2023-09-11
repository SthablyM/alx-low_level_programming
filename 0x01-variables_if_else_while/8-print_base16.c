#include <stdio.h>
/**
 * main -  prints all the numbers of base 16 in lowercase
 *
 * Return: Always (0)
 */
int main(void)
{
	int k;
	char x;

	for (k = 0 ; k < 10 ; k++)
		putchar(k + '0');
	for (x = 'a' ; x <= 'f' ; x++)
		putchar(x);
	putchar('\n');
	return (0);

}
