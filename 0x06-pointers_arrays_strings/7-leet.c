/**
 * leet - a function that encodes a string into 1337.
 * @s: an input string to be cheked
 * Return: s
 */
char *leet(char *s)
{
	int p = 0, q;
	char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[p])
	{
		for (q = 0; q < 10; q++)
			if (s[p] == str[q])
				s[p] = subs[q];

		p++;
	}

	return (s);
}
