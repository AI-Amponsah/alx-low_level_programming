#include <stdio.h>

/**
  *main - prints lower and uppercase letters
  *
  *Return: Always zero
  */

int main(void)
{
	char alph;
	char upper;


	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		puchar(upper);
	}
	putchar('\n')'
	return (0);
}
