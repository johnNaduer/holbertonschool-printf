#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdarg.h>
void imprimir(char c)
{
	_putchar(c);
}

int funcion_c(va_list c)
{
	int i;

	i = _putchar(va_arg(c, int));
	return (i);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int funcion_s(va_list c)
{
	char *str;
	int i = 0;

	str = va_arg(c, char*);
	for (i = 0; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	return (i);
}

int funcion_p(va_list c __attribute__((unused)))
{
	_putchar('%');
	return (1);
}
