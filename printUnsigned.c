#include "main.h"
/**
 * printUnsigned - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int printUnsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int number, la = n % 10, digit, ex = 1;
	int  cont = 1;

	n = n / 10;
	number = n;

	if (la < 0)
	{
		_putchar('-');
		number = -number;
		n = -n;
		la = -la;
		cont++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			ex = ex * 10;
			number = number / 10;
		}
		number = n;
		while (ex > 0)
		{
			digit = number / ex;
			_putchar(digit + '0');
			number = number - (digit * ex);
			ex = ex / 10;
			cont++;
		}
	}
	_putchar(la + '0');

	return (cont);
}

