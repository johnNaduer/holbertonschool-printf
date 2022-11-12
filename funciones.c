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
   i=_putchar(va_arg(c,int));
   return (i);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int funcion_s(va_list c)
{
    char *str;
    int i=0;
    str=va_arg(c,char*);
    for(i=0;str[i]!='\0';i++)
    {
        _putchar(str[i]);
    }
    return (i);
}

char *convert(unsigned int num, int base)
{
    static char representation[]="0123456789ABCDEF";
    static char buffer[50];
    char *ptr;
    ptr=&buffer[49];
    *ptr='\0';
    do
    {
        *--ptr = representation[num % base];
        num /= base;
    }while(num !=0);
    return (ptr);
}

int funcion_i(va_list c)
{
    int i,n,m;
    char *str;
    m=0;
    n=0;
    n=va_arg(c,int);
     if(n < 0)
    {
        n=-n;
        _putchar('-');
        m=1;
    }
    else

        str=convert(n,10);
    
    for(i=0;str[i]!='\0';i++)
    {
        _putchar(str[i]);
    }
    return (i+m);
}

