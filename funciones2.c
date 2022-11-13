#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdarg.h>

char *convert(unsigned int num, int base)
{
	static char representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';
	do {
	*--ptr = representation[num % base];
	num /= base;
	} while (num != 0);
	return (ptr);
}

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
