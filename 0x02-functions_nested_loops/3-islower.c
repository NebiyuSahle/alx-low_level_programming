#include "main.h"
/**
 * _islower - checks a if  character is in lowercase
 * @c: the character
 * Return: 1 if lower case, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
