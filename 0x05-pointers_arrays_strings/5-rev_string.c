#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */
void rev_strong(char *s)
{
	int len = 0, i = 0;
	char temp;

	while (s[i++])
		len++;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i = 1];
		s[len - i - 1] = temp;
	}
}
