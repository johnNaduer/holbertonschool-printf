#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int _printf(const char *format, ...);
void imprimir(char c);
int funcion_c(va_list c);
int funcion_s(va_list c);
int _putchar(char c);

typedef struct _functions
{
    char tipo;
    int (*f)(va_list);
}functions;

#endif
