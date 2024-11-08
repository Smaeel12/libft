/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboubkri <iboubkri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:13:26 by iboubkri          #+#    #+#             */
/*   Updated: 2024/11/07 19:29:40 by iboubkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	slen;
	char	*new;

	slen = ft_strlen(s);
	new = (char *)malloc(slen * sizeof(char));
	while (slen--)
	{
		new[slen] = f(slen, s[slen]);
	}
	return (new);
}
