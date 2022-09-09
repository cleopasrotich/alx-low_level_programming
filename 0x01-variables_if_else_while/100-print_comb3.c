#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all possible combinations of two-digit no
 *
 * Return: 0 on success
 */

int main(void)
{
int first, sec;

for (first = 0; first < 9; first++)
{
for (sec = first + 1; sec < 10; sec++)
{
putchar((first % 10) + 0);
putchar((sec % 10) + 0);

if (first == 8 && sec == 9)
{
continue;
putchar(',');
putchar(' ');
}

}

}

putchar('\n');
return (0);
}
