#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - conversion specifiers for printf function
 * @id: char pointer of the specifier
 * @f:pointer to the function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convMatch;

int _putchar(char c);
int _printf(const char *format, ...);
int printPointer(va_list val);
int printHex_aux(unsigned long int num);
int printHEX_AUX(unsigned int num);
int printExcluString(va_list val);
int printHEXHI(va_list val);
int printhexlow(va_list val);
int printOct(va_list val);
int printUnsigned(va_list args);
int printBin(va_list val);
int printSrev(va_list args);
int printRot13(va_list args);
int printInt(va_list args);
int printDec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int revString(char *s);
int print37(void);
int printChar(va_list val);
int printString(va_list val);

#endif
