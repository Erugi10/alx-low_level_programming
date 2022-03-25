#include "iain.h"
/**
 *print_line - prints a line n chars long.
 *@n: length of line.
 *
 *Return: void.
 */
void print_line(int n)
{
	int l;

	for (l = 1; l <= n; l++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
