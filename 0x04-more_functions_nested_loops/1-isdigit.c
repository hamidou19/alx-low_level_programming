#include"main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: the number to be checked
 * Return: 1 for a character to be digit or 1 for any else
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
