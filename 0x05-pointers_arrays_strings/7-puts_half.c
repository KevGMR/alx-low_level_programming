#include "main.h"

/**
  * puts_half - Prints half of a string
  * @str: The string to print
  *
  * Return: void
  */
void puts_half(char *str)
{
	int i;
	int counter = 0;

	for (i = 0; str[i] != '\0'; i++)
		counter++;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (counter % 2 == 0)
		{
			if (i > (counter / 2) - 1)
			{
				_putchar(str[i]);
			}
		} else
		{
			if (i > (counter / 2))
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n');
}

