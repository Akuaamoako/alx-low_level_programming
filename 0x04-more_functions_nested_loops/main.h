#include <stdio.h>
#include <ctype.h> // This header file contains the declaration of isupper

int main(void)
{
	char c;
	
	c = 'A';
	printf("%c: %d\n", c, isupper(c));
	c = 'a';
	printf("%c: %d\n", c, isupper(c));
	return (0);
}

