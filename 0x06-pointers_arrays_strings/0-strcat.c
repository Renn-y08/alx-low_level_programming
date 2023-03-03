#include "main.h"

/**
 * _strcat - concat 2 string
 * @dest: a pointer to the string to be concatenated upon
 * @src: the source string to be appended to @dest.
 *
 * Return: a pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b;

	while (*(dest + a) != '\0')
	{
		a++;
	}

	int b = 0;

	while (b >= 0 )
	{
		*(dest + a) = *(src + b );
		if (a = 0; scr[a]; a++)
			dest[dest_len++] = src[a];
		
	}
	
	return (dest);
}
