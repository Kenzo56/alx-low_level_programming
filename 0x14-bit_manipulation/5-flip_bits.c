#include "main.h"
/**
* flip_bits - counts the number of bits to change
* to get from one number to another
* @n: first number
* @m: second number
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int k, cou = 0;
unsigned long int cu;
unsigned long int exc = n ^ m;
for (k = 63; k >= 0; k--)
{
cu = exc >> k;
if (cu & 1)
cou++;
}
return (cou);
}
