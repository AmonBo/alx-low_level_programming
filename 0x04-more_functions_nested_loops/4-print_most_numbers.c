#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: no return.
 */
void print_most_numbers(void)
{
	int d;

	for (d = 48; d < 58; d++)
	{
		if (d != 50 && d != 52)
			_putchar(d);
	}
	_putchar('\n');
}
