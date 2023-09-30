#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - program that adds positive numbers
 *@argc: number of command line
 *@argv: array that contain the command line
 *Return: 0 and 1
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	int num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		 num = atoi(argv[i]);
		 sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
