#include "main.h"

/**
 * int _isdigit(int c);
 * @c: character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c);
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
