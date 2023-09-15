#include <stdio.h>
/**
 *main - function that print numbers and fizz buzz
 *Return: 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);	
	}
	_puchar('\n');
	return (0);
}
