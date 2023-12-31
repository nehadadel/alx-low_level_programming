#include "main.h"
/**
 *append_text_to_file - append text
 *
 *@filename: filename
 *@text_content: text content
 *
 *Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;

if (filename == NULL)
return (-1);


if (text_content == NULL)
return (1);


fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

bytes_written = write(fd, text_content, strlen(text_content));
if (bytes_written == -1 || (size_t)bytes_written != strlen(text_content))
{
close(fd);
return (-1);
}

close(fd);
return (1);
}
