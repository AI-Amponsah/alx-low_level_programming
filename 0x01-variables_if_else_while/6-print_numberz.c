#include <stdio.h>

/**
  *main - prints single base 10 numbers
  *Return: Always zero
  */

int main(void)
{
	int num;


	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
