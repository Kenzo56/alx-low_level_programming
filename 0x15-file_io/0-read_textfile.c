#include "main.h"
#include <stdlib.h>
/**
* read_textfile- Read text file print to STDOUT.
* @filename: text file being read
* @letters: number of letters to be read
* Return: k- actual number of bytes read and printed
*0 when function fails or filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t ff;
ssize_t k;
ssize_t r;
ff = open(filename, O_RDONLY);
if (ff == -1)
return (0);
buf = malloc(sizeof(char) * letters);
r = read(ff, buf, letters);
k = write(STDOUT_FILENO, buf, r);
free(buf);
close(ff);
return (k);
}
