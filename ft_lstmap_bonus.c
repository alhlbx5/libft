/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:10:30 by aalhalab          #+#    #+#             */
/*   Updated: 2023/12/20 12:28:38 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n;
	t_list	*nd;

	if (lst == NULL || f == NULL)
		return (NULL);
	nd = NULL;
	while (lst)
	{
		n = ft_lstnew(f(lst->content));
		if (n == NULL)
		{
			ft_lstclear(&nd, del);
			return (NULL);
		}
		ft_lstadd_back(&nd, n);
		lst = lst->next;
	}
	return (nd);
}
