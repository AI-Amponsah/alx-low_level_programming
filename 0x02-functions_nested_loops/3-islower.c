#include "main.h"

/**
  * _islower - checks if a letter is lower case
  *Return: Either 0 or 1
  *@c: character variable
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
