<h1 align="center"> La función printf</h1>
   <p align="left">
La función printf (que deriva su nombre de “print formatted”) imprime un mensaje por pantalla utilizando una “cadena de formato” que incluye las instrucciones para mezclar múltiples cadenas en la cadena final a mostrar por pantalla.

*ref.*
https://www.it.uc3m.es/pbasanta/asng/course_notes/input_output_printf_es.html
### Implement printf
Let's implement our own printf function. This is just for the purpose of comprehension. We call it print(). 
### the variables in _printf
It has one string argument (str) and the rest are variable arguments. The variable arguments are handled by macros like va_start, va_arg and va_end. There is a temporary buffer (buff) to build the output buffer. A while loop is needed to scan each character in the input string. Now we iterate character by character in the loop and copy each character into the output string. At the same time we check "%". "%" is not copied into the output string. Once we find it, we check the next character. 
### the specifiers in _printf
This is the format character. The format character tells how to format the argument into a visible output string. Printf supports varieties of formatting. C is for character, d for decimal integer, f for floating point, x for hexadecimal and s for string. We match the format and choose the argument variable using va_arg(). The argument variable is then converted to string format and added to the output string. The character can be copied as is and the function I created named "convert" is used for integer to string conversion.

![](https://doembeddedprogram.files.wordpress.com/2018/12/typesizerangeformatspecifierexamplechar1byte-128to127c.jpg)


Written  by John Naduer Espino Yaros


