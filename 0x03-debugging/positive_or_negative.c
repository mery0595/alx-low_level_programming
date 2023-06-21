#include "main.h"
/**
 * main - Entry point
 * Determines whether a given integer is positive or negative.
 * @param i The integer to check. Must be a valid integer.
 * @return 1 integer positive, -1 if negative, and 0 if zero.
 */

void postitive_or_negative(void i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
else
printf("%d is zero\n", i);
}
