#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - print a char from var args
 * @list: va_list to print from
 * Return: void
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - print an int from var args
 *
 * @list: va_list to print from
 */

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - print a float from var args
 *
 * @list: va_list to print from
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - print a string from var args
 *
 * @list: va_list to print from
 */

void print_string(va_list list)
{
	char *str = va_arg(list, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *separator = "";
	print_type funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}};
	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(funcs[j].symbol))
			{
				printf("%s", separator);
				funcs[j].print_func(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
