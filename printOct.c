#include "main.h"

/**
 * printOct - print octal number.
 * @val: arguments.
 * Return: counter.
 */
int printOct(va_list val)
{
	int i;
	int *arr;
	int count = 0;
	unsigned int n = va_arg(val, unsigned int);
	unsigned int temp = n;

	while (n / 8 != 0)
	{
		n /= 8;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		arr[i] = temp % 8;
		temp /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}

