/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboubkri <iboubkri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:24:14 by iboubkri          #+#    #+#             */
/*   Updated: 2024/10/29 20:35:31 by iboubkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i = 0;
	size_t j = 0;

	if (!needle && !needle[j])
		return ((char *)haystack);

	while (haystack && haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] == haystack[j + i] || !needle[j])
		{
			if (!needle[j])
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}