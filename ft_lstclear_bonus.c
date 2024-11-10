/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboubkri <iboubkri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:10:45 by iboubkri          #+#    #+#             */
/*   Updated: 2024/11/09 14:07:48 by iboubkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;

	curr = (*lst);
	lst = &(*lst)->next;
	while (curr)
	{
		if (del)
		{
			del(curr->content);
			free(curr);
		}
		curr = (*lst);
		lst = &(*lst)->next;
	}
}
