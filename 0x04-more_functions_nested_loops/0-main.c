#include "main.h"
#include <stdio.h>

/**
 * isupper - Check if a letter is upper
 * @x: The number to be checked
 *
 */
int isupper(int c)
{
	char c;
	c = 'A';
	printf("%c: %d\n", c, isupper(c));
	c = 'a';
	printf("%c: %d\n", c, isupper(c));
	return (0);
}

