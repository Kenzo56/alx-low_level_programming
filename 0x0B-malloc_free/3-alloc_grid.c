#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - nested loop to make grid
* @width: width input
* @height: height input
* Return: pointer to 2 dim. array
*/
int **alloc_grid(int width, int height)
{
int **u;
int k, j;
if (width <= 0 || height <= 0)
return (NULL);
u = malloc(sizeof(int *) * height);
if (u == NULL)
return (NULL);
for (k = 0; k < height; k++)
{
u[k] = malloc(sizeof(int) * width);
if (u[k] == NULL)
{
for (; k >= 0; k--)
free(u[k]);
free(u);
return (NULL);
}
}
for (k = 0; k < height; k++)
{
for (j = 0; j < width; j++)
u[k][j] = 0;
}
return (u);
}
