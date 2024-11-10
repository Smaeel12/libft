#include "libft.h"

void istests() {
    ft_isalpha(-100);
    ft_isalnum(-100);
    ft_isascii(-100);
    ft_isdigit(-100);
    ft_isprint(-100);
    ft_toupper(-100);
    ft_tolower(-100);
}

void strtests() {
    ft_strlen(NULL);
    ft_strchr(NULL, 'x');
    ft_strchr("hello", 0);
    ft_strrchr(NULL, 'x');
    ft_strrchr("hello", 0);

    ft_strncmp("hello", "hello", 0);
    ft_strncmp("hello", NULL, 10);
    ft_strncmp(NULL, "hello", 10);
    ft_strncmp(NULL, NULL, 10);

    char dst[50] = "hello";
    ft_strlcat(dst, "hello", 0);
    ft_strlcat(dst, NULL, 10);
    ft_strlcat(NULL, "hello", 10);
    ft_strlcat(NULL, NULL, 10);

    ft_strlcpy("hello", "hello", 0);
    ft_strlcpy("hello", NULL, 10);
    ft_strlcpy(NULL, "hello", 10);
    ft_strlcpy(NULL, NULL, 10);

    ft_strnstr("hello", "hello", 0);
    ft_strnstr("hello", NULL, 10);
    ft_strnstr(NULL, "hello", 10);
    ft_strnstr(NULL, NULL, 10);

    ft_strdup(NULL);
    ft_atoi("-----()()");
}

void memtests() {
    char dst[50];
    ft_memset(NULL, 'c', 5);
    ft_memset(dst, 0, 5);
    ft_memset(dst, 10, 0);
    ft_memchr(NULL, 'c', 5);
    ft_memchr(dst, 0, 5);
    ft_memchr(dst, 10, 0);
    ft_memcmp(NULL, 'c', 5);
    ft_memcmp(dst, 0, 5);
    ft_memcmp(dst, 10, 0);
    ft_memmove(NULL, 'c', 5);
    ft_memmove(dst, 0, 5);
    ft_memmove(dst, 10, 0);
    ft_memcpy(NULL, 'c', 5);
    ft_memcpy(dst, 0, 5);
    ft_memcpy(dst, 10, 0);

    ft_bzero(dst, 0);
    ft_bzero(NULL, 10);

    calloc(0, 10);
    calloc(10, 0);
}

void *malloc(size_t size) {
    return NULL;
}

void testpart2() {
    ft_substr(NULL, 0 , 0);
    ft_strjoin(NULL, NULL);
    ft_strtrim(NULL, NULL);
    ft_split(NULL, 0);
    ft_itoa(-0);
    ft_strmapi(NULL, NULL);
    ft_striteri(NULL, NULL);
    ft_putchar_fd(0, 100);
    ft_putstr_fd(0, 100);
    ft_putendl_fd(0, 100);
    ft_putnbr_fd(0, 100);
}

int main() {
    istests();
    strtests();
    memtests();
    testpart2();
}