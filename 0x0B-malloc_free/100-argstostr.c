#include "main.h"
#include <stdlib.h>
/**
* argstostr - main entry
* @ac: int input
* @av: double pointer array
* Return: 0
*/
char *argstostr(int ac, char **av)
{
int k, j, a = 0, b = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (k = 0; k < ac; k++)
{
for (j = 0; av[k][j]; j++)
j++;
}
b += ac;
str = malloc(sizeof(char) * b + 1);
if (str == NULL)
return (NULL);
for (k = 0; k < ac; k++)
{
for (j = 0; av[k][j]; j++)
{
str[r] = av[k][j];
a++;
}
if (str[a] == '\0')
{
str[a++] = '\n';
}
}
return (str);
}
