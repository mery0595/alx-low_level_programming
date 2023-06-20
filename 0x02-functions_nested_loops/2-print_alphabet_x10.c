#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int i = 0;

	while (i < 10)
	{
		while (ch <= 'z')
		{
		_putchar(ch);
		ch++;
		}
	ch = 'a';
	_putchar('\n');
	i++;
	}
}
