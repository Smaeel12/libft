/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboubkri <iboubkri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:24:46 by iboubkri          #+#    #+#             */
/*   Updated: 2024/10/30 14:37:25 by iboubkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set) {
	size_t len;

	while (ft_strchr(set, *s1)) s1++;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len - 1])) len--;
	return ft_substr(s1, 0, len + 1);
}