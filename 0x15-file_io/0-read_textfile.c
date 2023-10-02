#include "main.h"
/**
 *read_textfile -  reads a text file and prints it to the POSIX standard output.
 *
 *@filename: filename
 *@letters: is the number of letters it should read and print
 *
 *Return: returns the actual number of letters it could read and print
 *if the file can not be opened or read, return 0
 *if filename is NULL return 0
 *if write fails or does not write the expected amount of bytes, return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t bytes_read, bytes_written;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = (char *)malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (0);
}

bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(fd);
return 0;
}


bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read) {
free(buffer);
close(fd);
return 0;
}

free(buffer);
close(fd);
return bytes_read;
}
