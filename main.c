#include <fcntl.h>
#include <stdio.h>
int main() {
    int fd = open("ft_strlen.c", O_RDONLY);
    int fd2 = open("ft_strlen.c", O_RDONLY);
    int fd3 = open("ft_strlen.c", O_RDONLY);
    int fd4 = open("ft_strlen.c", O_RDONLY);
    printf("%i\n", fd4);
}