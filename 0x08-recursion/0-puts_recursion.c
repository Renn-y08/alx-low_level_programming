#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - print a string
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	else
	{
		_putchar(s);
		_puts_recursion(++s);
	}
}
