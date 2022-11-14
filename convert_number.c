#include <stdio.h>
#include "main.h"
/**
 * convert - Convert number to string
 * @num : input unsigned int
 * @base : input base
 * Return: Length of the number.
 */
char *convert(unsigned int num, int base)
{
	char _representation[] = "0123456789ABCDEF";
	static char _buffer[50];
	char *ptr;

	ptr = &_buffer[49];
	*ptr = '\0';

	do {
		*--ptr = _representation[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
