#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: parameter
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	n = n % 10;
	_putchar (n + 48);
	return (n);
}
