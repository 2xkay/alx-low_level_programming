#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @c: The number  to be checked
 * Return: 1 for a character that will a digit, 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
