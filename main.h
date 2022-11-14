#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/*Prototypes*/
int _printf(const char *format, ...);
void imprimir(char c);
int funcion_c(va_list c);
int funcion_s(va_list c);
int _putchar(char c);
char *convert(unsigned int num, int base);
int funcion_i(va_list c);
int funcion_p(va_list c __attribute__((unused)));
/**
 * struct _functions - Srtucture specifier
 * @f : function type va_list
 * @tipo : %"char" specifier
 */
typedef struct _functions
{
	char tipo;
	int (*f)(va_list);
} functions;

#endif
