#include "main.h"

/**
* _strlen - find the length of the string
* @s: string to find length
* Return: length of the string
*/

int _strlen(char *s)
{
	int i;

	int counter = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		counter++;
	return (counter);
}
