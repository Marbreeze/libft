#include <string.h>

void ft_putnbr_fd(int n, int fd)
{
    char n = n + '0';
    write (fd, "n", 1);
}




