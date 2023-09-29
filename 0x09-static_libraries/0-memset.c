#include "main.h"
/**
 * _memset - main function
 *@s: first char to be checked
 *@b: second char to be checked
 *@n: unsigned int
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	if (s == '\0' || n == 0)
	{
		return (s);
	}
	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}
	return (s);

}
