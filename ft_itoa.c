/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboubkri <iboubkri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:06:48 by iboubkri          #+#    #+#             */
/*   Updated: 2024/11/07 21:00:55 by iboubkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	count_len(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	putnbr_to_buffer(unsigned int n, char *str)
{
	if (!n)
		return ;
	*str = (n % 10) + '0';
	putnbr_to_buffer(n / 10, str - 1);
	return ;
}

char	*ft_itoa(int n)
{
	size_t			len;
	unsigned int	num;
	char			*str;

	if (!n) { 
		return (char *) {'0', '\0'};
	}
	len = count_len(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (n < 0)
		num = -n;
	else
		num = n;
	str[len--] = '\0';
	putnbr_to_buffer(num, str + len);
	if (n < 0)
		str[0] = '-';
	return (str);
}


#include <stdlib.h>
#include <unistd.h>

void    ft_print_result(char const *s)
{
        int             len;

        len = 0;
        while (s[len])
                len++;
        write(1, s, len);
}

int             main(int argc, const char *argv[])
{
        int             arg;

        if (argc == 1)
                return (0);
        else if ((arg = atoi(argv[1])) == 1)
        {
                char *res = ft_itoa(0);
                ft_print_result(res);
                free(res);
        }
        else if (arg == 2)
        {
                char *res = ft_itoa(9);
                ft_print_result(res);
                free(res);
        }
        else if (arg == 3)
        {
                char *res = ft_itoa(-9);
                ft_print_result(res);
                free(res);
        }
        else if (arg == 4)
        {
                char *res = ft_itoa(10);
                ft_print_result(res);
                free(res);
        }
        else if (arg == 5)
        {
                char *res = ft_itoa(-10);
                ft_print_result(res);
                free(res);
        }
        else if (arg == 6)
        {
                char *res = ft_itoa(8124);
                ft_print_result(res);
                free(res);
        }
        else if (arg == 7)
        {
                char *res = ft_itoa(-9874);
                ft_print_result(res);
                free(res);
        }
        else if (arg == 8)
        {
                char *res = ft_itoa(543000);
                ft_print_result(res);
                free(res);
        }
        else if (arg == 9)
        {
                char *res = ft_itoa(-2147483648LL);
                ft_print_result(res);
                free(res);
        }
        else if (arg == 10)
        {
                char *res = ft_itoa(2147483647);
                ft_print_result(res);
                free(res);
        }
        return (0);
}