#include "main.h"
/**
* create_file - Creates a file.
* @filename: A pointer to the name of the file to create.
* @text_content: A pointer to a string to write to the file.
* Return: If the function fails - -1.
* Otherwise - 1.
*/
int create_file(const char *filename, char *text_content)
{
int ff, k, l = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (l = 0; text_content[l];)
l++;
}
ff = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
k = write(fd, text_content, l);
if (ff == -1 || k == -1)
return (-1);
close(ff);
return (1);
}
