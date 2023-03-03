/*
 * File: 0-strcat.c
 * Auth: Your Name
 * Desc: Concatenates two strings.
 */

#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The string to which the source string will be appended.
 * @src: The source string to be appended to the destination string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
