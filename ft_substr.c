/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboubkri <iboubkri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:02:55 by iboubkri          #+#    #+#             */
/*   Updated: 2024/10/30 14:37:04 by iboubkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;

	sub = (char *)malloc(len * sizeof(char));
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, len);
	return sub;
}
