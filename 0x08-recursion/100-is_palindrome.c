#include "main.h"
/**
 * _strlen_recursion - function that return the length
 *@s: string to be checked
 *Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}

/**
 *compare_string - compare each character of the string
 *@s: string
 *@left: smallest string
 *@right: largest string
 *Return: int
 */
int compare_string(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + compare_string(s, left + 1, right - 1));
	}
	return (0);
}
/**
 *is_palindrome - function that return string
 *@s: string to be checked
 *Return: returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s + 1)));
}
