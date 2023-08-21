#include "main.h"
/**
 * printInt - print integer
 * @args: argument to print
 * Return: count
 */
int printInt(va_list args)
{
	int ar = va_arg(args, int);
	int num, la = ar % 10, digit, ex = 1;
	int  count = 1;

	ar = ar / 10;
	num = ar;

	if (la < 0)
	{
		_putchar('-');
		num = -num;
		ar = -ar;
		la = -la;
		count++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			ex = ex * 10;
			num = num / 10;
		}
		num = ar;
		while (ex > 0)
		{
			digit = num / ex;
			_putchar(digit + '0');
			num = num - (digit * ex);
			ex = ex / 10;
			count++;
		}
	}
	_putchar(la + '0');

	return (count);
}

/**
 * printDec - prints decimal
 * @args: argument to print
 * Return: count
 */

int printDec(va_list args)
{
	int ar = va_arg(args, int);
	int num, la = ar % 10, digit;
	int  count = 1;
	int ex = 1;

	ar = ar / 10;
	num = ar;

	if (la < 0)
	{
		_putchar('-');
		num = -num;
		ar = -ar;
		la = -la;
		count++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			ex = ex * 10;
			num = num / 10;
		}
		num = ar;
		while (ex > 0)
		{
			digit = num / ex;
			_putchar(digit + '0');
			num = num - (digit * ex);
			ex = ex / 10;
			count++;
		}
	}
	_putchar(la + '0');

	return (count);
}
