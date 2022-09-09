#include <stdio.h>
#include <stdlib.h>

/**
 * main - To determine the alphabet in both lower case except q and e
 *
 * Return: 0 on success
 */

int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
if (i != 'e' && i != 'q')
{
putchar(i);
}

}


putchar('\n');
return (0);
}
