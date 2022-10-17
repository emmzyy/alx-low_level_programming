/**
 * main -  prints all possible different combinations of three digits.
 * Return: 0
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			for (num 3 = num2 + 1; num2 < 10; num3++)
				putchar((num1 % 10) + '0');
				putchar((num2 % 10) + '0');

			if (num1 == 8 && num2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
}

	putchar('\n');
	return (0);
}
