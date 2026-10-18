#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int fd;
    char buffer[100];
    ssize_t bytes_read;

    fd = open("hello.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("open");
        return (1);
    }

    bytes_read = read(fd, buffer, sizeof(buffer));
    if (bytes_read == -1)
    {
        perror("read");
        close(fd);
        return (1);
    }

    write(1, buffer, bytes_read);

    close(fd);
    return (0);
}
