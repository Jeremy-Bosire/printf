#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
void intToString(int num, char *str);
int printf_dec(int i);
int printf_int(int i);
int octalToDecimal(int octal);
int hexToDecimal(int hex);
int printf_oct(int i);

#endif
