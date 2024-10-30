/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboubkri <iboubkri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:24:12 by iboubkri          #+#    #+#             */
/*   Updated: 2024/10/29 20:36:25 by iboubkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	size_t i;
	char *addr;

	i = 0;
	addr = NULL;
	while (s && s[i])
	{
		if (s[i] == c)
			addr = (char *) &s[i];
		i++;
	}
	return (addr);
}