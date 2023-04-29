#include "main.h"
#include <stdio.h>

/**
 * _strlen - Length of string
 * @s: string
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen(s + 1));
	return (0);
}

/**
 * check - Check Palindrome
 * @s: string
 * @l: left
 * @r: right
 * Return: Always 0 (success)
 */

int check(char *s, int l, int r)
{
	if (s[l] == s[r])
		if (l > r / 2)
			return (1);
		else
			return (check(s, l + 1, r - 1));
	else
		return (0);
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * @s: String
 * Return: Always 0 (Success)
 */

int is_palindrome(char *s)
{
	return (check(s, 0, _strlen(s) - 1));
}
