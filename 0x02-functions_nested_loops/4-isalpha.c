#include "main.h"

/**
  * _isalpha - checks uppercase letters
  *@c: variable for alphabets
  *Return: Either 0 or 1
  */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
