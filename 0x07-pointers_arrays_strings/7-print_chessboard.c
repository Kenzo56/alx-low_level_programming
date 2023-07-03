#include "main.h"
/**
* print_chessboard - Entry point
* @a: array
* Return: Always 0
*/
void print_chessboard(char (*a)[10])
{
int k;
int m;
for (k = 0; k < 10; k++)
{
for (m = 0; m < 10; m++)
_putchar(a[k][m]);
_putchar('\n');
}
}
