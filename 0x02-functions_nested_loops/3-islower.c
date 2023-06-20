#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: parametre
 * Return: 1 if true or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else 
		return (0);
}
