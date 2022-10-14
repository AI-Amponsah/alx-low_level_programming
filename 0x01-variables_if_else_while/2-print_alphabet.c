#include <stdio.h>

/**
  *main - prints a character
  *
  *Return: zero
  */

int main(void)
{
	char alph;


	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');

	return (0);
}
