#include "main.h"

/**
 * main - Print the word "Holberton"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
char p[] = "wiz-js";

for (i = 0; i < 9; i++)
{
_putchar(p[i]);
}
_putchar('\n');
return (0);
}
