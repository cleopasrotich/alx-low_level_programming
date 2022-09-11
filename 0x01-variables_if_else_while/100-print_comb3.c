#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all possible combinations of two-digit no
 *
 * Return: 0 on success
 */

int main(void)
{
int i = 0;
int c;
int f;

while (i <= 99)
{
c = (i / 10 + '0');
f = (i % 10 + '0');

if (c < f)
{
putchar(c);
putchar(f);

if (i != 89)
{
putchar(',');
putchar(' ');
}
}
i++;
}
putchar('\n');
return (0);
}
