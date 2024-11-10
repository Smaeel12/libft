#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void    ft_print_result(int n)
{
        if (n > 0)
                write(1, "1", 1);
        else if (n < 0)
                write(1, "-1", 2);
        else
                write(1, "0", 1);
}

int             main()
{
        ft_print_result(strncmp("test\200", "test\0", 6));
        return (0);
}