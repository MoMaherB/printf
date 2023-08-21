#include "main.h"
/**
 * _printf - function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convMatch m[] = {
		{"%s", printString}, {"%c", printChar},
		{"%%", print37},
		{"%i", printInt}, {"%d", printDec}, {"%r", printSrev},
		{"%R", printRot13}, {"%b", printBin}, {"%u", printUnsigned},
		{"%o", printOct}, {"%x", printhexlow}, {"%X", printHEXHI},
		{"%S", printExcluString}, {"%p", printPointer}
	};

	va_list args;
	int var1 = 0, var2, ln = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[var1] != '\0')
	{
		var2 = 13;
		while (var2 >= 0)
		{
			if (m[var2].id[0] == format[var1] && m[var2].id[1] == format[var1 + 1])
			{
				ln += m[var2].f(args);
				var1 = var1 + 2;
				goto Here;
			}
			var2--;
		}
		_putchar(format[var1]);
		ln++;
		var1++;
	}
	va_end(args);
	return (ln);
}
