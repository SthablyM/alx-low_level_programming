#include "main.h"
/**
 **_memset -  function that fills memory with a constant byte
 *@s: first char to be checked
 *@b: second char to be checked
 *@n: unsigned int
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	if (s == NULL || n == 0)
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
