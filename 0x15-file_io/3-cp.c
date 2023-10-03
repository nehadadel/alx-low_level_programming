#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

void error_exit(const char *message, int exit_code)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(exit_code);
}

int main(int argc, char *argv[])
{
int fd_from, fd_to;
char buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written;

if (argc != 3)
error_exit("Usage: cp file_from file_to", 97);


const char *file_from = argv[1];
const char *file_to = argv[2];

fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
error_exit("Error: Can't read from file", 98);
}

fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
error_exit("Error: Can't write to file", 99);


while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
error_exit("Error: Can't write to file", 99);
}
}

if (bytes_read == -1)

error_exit("Error: Can't read from file", 98);


if (close(fd_from) == -1 || close(fd_to) == -1)
error_exit("Error: Can't close fd", 100);


return (0);
}
