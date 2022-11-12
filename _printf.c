#include "main.h"
#include <stdio.h>
#include <stdarg.h>
int _printf(const char *format, ...)
{
va_list arg;
	functions funciones[]={{'c',funcion_c},{'s',funcion_s},{'d',funcion_i},{'i',funcion_i},{'\0',NULL}};
	int i, j, leng1, leng2,l;
	void (*p)(char);

	leng1 = 0;
	leng2 = 0;
	l=0;
	p = &imprimir;
	if(format == NULL)
	{
		return (-1);
	}
	va_start(arg, format);

	for(i=0 ;format[i]!= '\0';i++)
	{

    	if(format[i]=='%')
    	{
	
		if(format[i+1]=='%')
		{
			_putchar('%');
			l++;
		}

        i++;
        if(format[i]=='%')
        {
            (*p)(format[i]);
        }
        for(j=0; funciones[j].tipo !='\0'; j++)
        {
            if(format[i] == funciones[j].tipo)
            {
                leng2+=funciones[j].f(arg);
            }
        }
    }
    else
    {
        leng1++;
        (*p)(format[i]);
    }
}
va_end(arg);
return (leng1 + leng2+ l);
}
