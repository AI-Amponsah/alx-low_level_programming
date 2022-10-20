#include "main.h"

/**
  *  _isdigit - checks for an integer b/n 0-9
  * @c: Function arguement
  * Return: Integer value
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
