#include "main.h"

/**
 * printBin - prints a binary number.
 * @val: arguments.
 * Return: conter
 */
int printBin(va_list val)
{
	int fl = 0;
	int conter = 0;
	int i, var1 = 1, var2;
	unsigned int number = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((var1 << (31 - i)) & number);
		if (p >> (31 - i))
			fl = 1;
		if (fl)
		{
			var2 = p >> (31 - i);
			_putchar(var2 + 48);
			conter++;
		}
	}
	if (conter == 0)
	{
		conter++;
		_putchar('0');
	}
	return (conter);
}
