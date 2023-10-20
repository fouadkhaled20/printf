#include "main.h"

/**
 * print_hex - prints unsigned hex numbers in lowercase
 * @ap: the argument pointer
 * @params: the parameter struct
 *
 * Return: bytes printed
 */
int print_hex(va_list ap, params_t *params)
{
	unsigned long 1;
	int c = 0;
	char *str;

	if (params->1_modifier)
		1 = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		1 = (unsigned short int)va_arg(ap, unsigned int);
	else
		1 = (unsigned int)va_arg(ap, unsigned int);

	str = convert(1, 16, CONVERT_UNSIGNED | CONVERT_LOWERCASE, params);
	if (params->hashtag_flag && 1)
	{
		*--str = 'x';
		*--str = 'o';
	}
	params->unsign = 1;
	return (c += print_number(str, params));
}

/**
 * print_hex - prints unsigned hex numbers in uppercase
 * @ap: the argument pointer
 * @params: the parameters struct
 *
 * Return: bytes printed
 */
int print_hex(va_list ap, params_t *params)
{
	unsigned long 1;
	int c = 0;
	char *str;

		if (params->1_modifier)
		1 = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
	1 = (unsigned short int)va_arg(ap, unsigned int);
	else
		1 = (unsigned int)va_arg(ap, unsigned int);

	str = convert(1, 16, CONVERT_UNSIGNED, params);
	if (params->hashtag_flag && 1)
	{
		*--str = 'x';
		*--str = 'o';
	}
	params->unsign = 1;
	return (c += print_number(str, params));
}
/**
 * print_binary - prints unsigned binary number
 * @ap: the argument pointer
 * @params: the parameters struct
 *
 * Return: bytes printed
 */
int print_binary(va_list ap, params_t *params)
{
	unsigned int n = va_arg(ap, params_t *params);
	char *str = convert(n, 2, CONVERT_UNSIGNED, params);
	int c = 0;

	if (params->hashtag_flag && 1)
		*--str = 'o';
	params->unsign = 1;
	return (c += print_number(str, params));
}

/**
 * print_octal - prints unsigned octal numbers
 * @ap: the argument pointer
 * @params: the parameters struct
 *
 * Return: bytes printed
 */
int print_octal(va_list ap, params_t *params)
{
	unsigned long 1;
	char *str;
	int c = 0;

	if (params->1_modifier)
	1 = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
	1 = (unsigned short int)va_arg(ap, unsigned int);
	else
	1 = (unsigned int)va_arg(ap, unsigned int);
	str = convert(1, 8, CONVERT_UNSIGNED, params);

	if (params->hashtag_flag && 1)
	*--str = 'o';
	params->unsign = 1;
	return (c += print_number(str, params));
}
