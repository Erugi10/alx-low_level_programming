#include "main.h"
/**
 *print_alphabet_x10 - print 10 times the alphabet in lowercase
 *
 *Return: No return value
 */
void print_alphabet_x10(void)
{
	char character;
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		for (character = 'a'; character <= 'z'; character++)
		{
			_putchar(character);
		}
	_putchar('\n');
	}
}
