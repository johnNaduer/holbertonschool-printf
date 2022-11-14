#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdarg.h>
/**
 * funcion_i - function that prints the integer numbers
 * @c: input va_list
 * Return: the entire number of characters
 */
int funcion_i(va_list c)
{
	int i, n, m;
	char *str;

	m = 0;
	n = 0;

	n = va_arg(c, int);
	if (n < 0)
	{
	n = -n;
	_putchar('-');
	m = 1;
	}
	str = convert(n, 10);

	for (i = 0; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	return (i + m);
}
