#include <stdio.h>
/**
 * main - using char, prints numbers from 0-10
 * blank space
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');
	return (0);
}
