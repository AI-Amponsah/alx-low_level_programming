#include <stdio.h>

/**
  *main - skips some letters
  *
  *Return: Always zero
  */

int main(void)
{
	char alph;


	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if ((alph != 'e') && (alph != 'q'))
		{
			putchar(alph);
		}
	}
	putchar('\n');
	return (0);
}
