#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: Pointer to string to be printed
 */
void puts_half(char *str)
{
	int len = 0, i, n;

	/* Get lenth of string */
	while (str[len] != '\0')
		len++;

	/* Calculate number of characters to print */
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;

	/* Print character */
	for (i = n; i < len; i++)
		_putcahr(str[i]);

	_putchar('\n');
}
