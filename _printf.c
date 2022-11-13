#include "main.h"
#include <stdio.h>
#include <stdarg.h>
int _printf(const char *format, ...)
{
	va_list arg;
	functions funciones[] = {{'c', funcion_c}, {'s', funcion_s}, {'d', funcion_i}, {'i', funcion_i}, {'%',funcion_p}, {'\0',NULL}};

	int i, j, leng1, leng2;

	void (*p)(char);

	leng2 = leng1 = 0;

	p = &imprimir;
	if (format == NULL)
		return (-1);
	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
	if (format[i] == '%')
	{
		i++;
	for (j = 0; funciones[j].tipo != '\0'; j++)
	{
	if (format[i] == funciones[j].tipo)
	leng2 += funciones[j].f(arg);
	}
	}
	else
	{
	leng1++;
	(*p)(format[i]);
	}
	}
	va_end(arg);
	return (leng1 + leng2);
}
