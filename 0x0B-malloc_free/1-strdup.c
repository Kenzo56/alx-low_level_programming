#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - duplicate to new memory space location
* @str: char
* Return: 0
*/
char *_strdup(char *str)
{
char *kkk;
int i, r = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
kkk = malloc(sizeof(char) * (i + 1));
if (aaa == NULL)
return (NULL);
for (r = 0; str[r]; r++)
kkk[r] = str[r];
return (kkk);
}
