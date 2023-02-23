#include "main.h"

/**
 * _isdigit - check if character is a number between 0 to 9
 * @c: input number
 * Return: 1 if is a number (0 to 9), 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

