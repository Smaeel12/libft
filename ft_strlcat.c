/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboubkri <iboubkri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:24:20 by iboubkri          #+#    #+#             */
/*   Updated: 2024/10/28 21:24:21 by iboubkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i = 0;
	size_t dstlen;
	size_t srclen = 0;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);

	while (dstsize > dstlen && i < dstsize - dstlen - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	if (dstsize > dstlen)
		dstsize = dstlen;
	dst[dstlen + i] = '\0';
	return (srclen + dstsize);
}