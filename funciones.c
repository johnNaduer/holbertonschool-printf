#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdarg.h>
/**
 * imprimir - function that prints the characters
 * of _printf.c excluding the specifier and the '%'.
 * @c: input char.
 * Return: no return.
 */
void imprimir(char c)
{
	_putchar(c);
}

/**
 * funcion_c - function that prints the characters.
 * of _printf.c with the specifier 'c'.
 * @c: input va_list.
 * Return: integer value of the function.
 */

int funcion_c(va_list c)
{
	int i;

	i = _putchar(va_arg(c, int));
	return (i);
}

/**
 * _putchar - function that prints the characters.
 * @c: input char.
 * Return: the character of the function
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * funcion_s - function that prints a string.
 * @c: input va_list.
 * Return: integer value of the function.
 */

int funcion_s(va_list c)
{
	char *str;
	int i = 0;

	str = va_arg(c, char*);
	if(str == NULL)
	{
		str = "(null)";
	}
	
	for (i = 0; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	return (i);
}

/**
 * funcion_p - function that prints a '%'.
 * @c: input va_list.
 * Return: returns a unit as you enter a '%'.
 */

int funcion_p(va_list c __attribute__((unused)))
{
	_putchar('%');
	return (1);
}
