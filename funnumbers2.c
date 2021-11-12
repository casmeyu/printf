#include "main.h"
/**
 * print_u - prints an unsigned int
 * @ap: list of arguments
 * Return: the number of printed digitis
 */
int print_u(va_list ap)
{
	unsigned int n = va_arg(ap, int);

	return (convert_d(n));
}
