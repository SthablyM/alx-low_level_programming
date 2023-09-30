#include <stdio.h>
/**
 *main - function that prints the number of arguments passed into it
 *@argc: number of command
 *@argv: array that contains command
 *Return: 0 when successful
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
