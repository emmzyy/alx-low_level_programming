#include "main.h"
/**
 * times_table - prints the 9 time table
 */
void times_table(void)
{
	int num, mul, reslt;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');

			reslt = num * mul;

			if (resl <= 9)
				_putchar(' ');
			else
				_putchar((reslt / 10) + '0');
			_putchar((reslt % 10) + '0');


		}

	}


}
