include "main.h"

/**
* more_numbers - print 0 to 14 ten times
*/
void more_numbers(void)
{
	   int i, j;

		for (i = 1; i <= 10; i++)
	{
		for (j = 0; i <= 14; i++)
		{
			if (i >= 10)
			_putchar('1');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}

}
