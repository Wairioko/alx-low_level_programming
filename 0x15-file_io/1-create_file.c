#include "main.h"
/**
*create_file - create file
*@filename: filename
*@text_content: content in file
*Return: 1 for success -1 for failure
*/
int create_file (const char *filename, char *text_content)
{
int fd;
int nletters;
int rwr;
if (!filename)
return (-1)
fd  = open(filename, 0_CREAT | 0_WRONLY | 0_TRUNC, 0600);
if (fd == -1)
return (-1);
if (!text_content)
text_content = "";
for (nletters = 0; text_content[nletters]; nletters++)
;
rwr = write(fd, text_content, nletters);
if (rwr == -1)
return (-1)
close(fd);
return (1);
}