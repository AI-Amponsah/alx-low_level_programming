#include "main.h"

/**
  * _isupper- checks for the case of a character
  *@c: function arguement
  * Return: An integer value
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
