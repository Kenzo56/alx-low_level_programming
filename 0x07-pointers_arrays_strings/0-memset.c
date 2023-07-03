#include "main.h"
/**
* _memset - fill a block of memory with a specific value
* @b: starting address of memory to be filled
* @k: the desired value
* @n: number of bytes to be changed
* Return: changed array with new value for n bytes
*/
char *_memset(char *b, char k, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
b[i] = k;
n--;
}
return (b);
}
