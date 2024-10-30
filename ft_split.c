/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboubkri <iboubkri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:37:55 by iboubkri          #+#    #+#             */
/*   Updated: 2024/10/30 15:49:20 by iboubkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	count_words(const char *s, int delime)
{
	size_t	i;
	size_t	count;
	size_t	len;

	i = 0;
	count = 0;
	len = ft_strlen(s);
	while (i < len + 1)
	{
		if ((((s[i] == delime && i ) || !s[i]) && s[i - 1] != delime))
		{
			count++;
		}
		i++;
	}
	return (count);
}

int	main(void)
{
	char *s = ",,,2258welcome222,,,,,";

	size_t out = count_words(s, '2');
	printf("%zu", out);
}