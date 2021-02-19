#include "holberton.h"

/**
* rot13 - encode a string into rot13
* @c: string literal of any size
*
* Return: pointer to encoded string literal
*/

char *rot13(char *c)
{
int n, x;

char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (n = 0; c[n] != 00; n++)
{
	for (x = 0; in[x] != 00; x++)
	{
		if (c[n] == in[x])
		{
			c[n] = out[x];
		}
	}
}
return (c);
}
