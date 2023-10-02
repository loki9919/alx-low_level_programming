#include "main.h"

int checker(char *s, int start, int length);
int length_string(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string input
 * Return: 1 if it is a palandrome, 0if it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (checker(s, 0, length_string(s)));
}
/**
 * length_string - return length of string
 * @s: string to calculate the length of
 * Return: length of a string
 */
int length_string(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + length_string(s + 1));
}
/**
 * checker - check the characters recursively for palindrome
 * @s: string to check
 * @start: the beginning of the string
 * @length: of the string
 * Return: 1 if palindrome, 0 if not
 */
int checker(char *s, int start, int length)
{
	if (s[start] != s[length - 1])
	{
		return (0);
	}
	if (start >= length)
	{
		return (1);
	}
	return (checker(s, start + 1, length - 1));
}
