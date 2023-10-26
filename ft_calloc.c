/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhlalab@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:58:49 by aalhalab          #+#    #+#             */
/*   Updated: 2023/10/26 17:34:15 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *buffer;
	size_t n;

	n = count * size;
	buffer = malloc(n);
	if(!buffer)
		return (NULL);
	ft_bzero(buffer, n);
	
	return (buffer);
}
