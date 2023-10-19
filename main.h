#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stadarg.h>


int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list val);
int print_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int print_unsigned_int(va_list args);
int print_dec(va_list args);
int print_oct(va_list val;
int print_HEX(va_list val);
int print_HEX_extra(unsigned int num);
int print_hex(va_list val);
int print_hex_extra(unsigned long int num);
int print_bin(va_list val);
int print_int(va_list args);

#endif /* MAIN_H */
