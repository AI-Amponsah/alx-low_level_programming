#include <stdio.h>

/**
  *main - Lowercase letters in reverse
  *
  *Return: Always zero
  */

int main(void)
{
	char alph;


	for (alph = 'z'; alph >= 'a'; alph--)
		putchar(alph);
	putchar('\n');
	return (0);
}
