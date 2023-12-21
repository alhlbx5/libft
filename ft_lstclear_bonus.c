/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:06:43 by aalhalab          #+#    #+#             */
/*   Updated: 2023/12/20 12:28:14 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l;
	t_list	*t;

	if (lst == NULL || del == NULL)
		return ;
	l = *lst;
	while (l)
	{
		t = l->next;
		del(l->content);
		free(l);
		l = t;
	}
	*lst = NULL;
}
