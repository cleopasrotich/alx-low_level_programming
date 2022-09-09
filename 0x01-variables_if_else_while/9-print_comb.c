#include <stdio.h>

/**
 * main - program that prints all possible combinations of single-digit no
 *
 * Return: 0 on success
 */

int main(void)
{
int i;

for (i = 48; i <= 57; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);

}
