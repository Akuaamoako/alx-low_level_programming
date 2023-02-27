#include "main.h"

/**
 * swap_int - Swaps the values of the two integers
 *
 * @a: First integer to be swapped
 * @b: Second integer to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}