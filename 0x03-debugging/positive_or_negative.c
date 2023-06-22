#include "main.h"
/**
 * Description:tests function that prints 0 if 0 is zero
 *
 */

void positive_or_negative(int i)
{
	if (i > 0)
{
		printf("%d is positive\n", i);
}
	else if (i < 0)
{
		printf("%d is negative\n", i);
}
	else
		printf("%d is zero\n", i);
}

