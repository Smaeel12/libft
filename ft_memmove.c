/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboubkri <iboubkri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:28:53 by iboubkri          #+#    #+#             */
/*   Updated: 2024/10/30 13:41:23 by iboubkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src) return NULL;
	while (len)
	{
		((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
		len--;
	}
	return (dst);
}