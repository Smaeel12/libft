/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboubkri <iboubkri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:37:55 by iboubkri          #+#    #+#             */
/*   Updated: 2024/11/07 19:11:27 by iboubkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	slen;
	size_t	i;

	count = 0;
	i = 0;
	slen = ft_strlen(s);
	while (s && i < slen + 1)
	{
		if ((s[i] == c || !s[i]) && (s[i - 1] && s[i - 1] != c))
			count++;
		i++;
	}
	return (count);
}

static void	free_all(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
		free(arr[i]);
}

static void	fill_array(char **arr, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (s && s[i])
	{
		j = 0;
		while (s[i + j] && s[i + j] != c)
			j++;
		if (j)
		{
			arr[k] = ft_substr(s, i, j);
			if (!arr[k])
				free_all(arr);
			i = i + j - 1;
			k++;
		}
		i++;
	}
	arr[k] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	num;

	num = count_words(s, c) + 1;
	arr = (char **)malloc(num * sizeof(char *));
	if (!arr)
		return (NULL);
	fill_array(arr, s, c);
	return (arr);
}
