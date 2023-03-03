#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src to concatenate
 *
 * Return: pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/*
	 * Append the first n characters of src to dest,
	 * stopping early if we encounter the null terminator of src
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/*
	 * Add the null terminator to the end of the concatenated string,
	 * which is the original null terminator of dest if we didn't
	 * copy any characters from src
	 */
	dest[dest_len + i] = '\0';

	return dest;
}
