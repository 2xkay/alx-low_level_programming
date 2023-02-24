#include "main.h"

/**
 * _isdigit - check if character is a number
 * @c: input number
 * Return: 1 if is a number, 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

