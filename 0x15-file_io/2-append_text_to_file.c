#include "main.h"
/**
*append_text_to_file -  appends text at end of file
*@filename: filename
*@text_content: content to be added
*Return : 1 if file exist -1 fail as it doesnt exist
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int nletters;
int rwr;
if (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content)
{
for (nletters = 0; text_content[nletters]; nletters++);
rwr = write(fd, text_content, letters);
if (rwr == -1)
return (-1);
}
close(fd);
return (1);
}
