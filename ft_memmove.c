/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhlalab@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:46:57 by aalhalab          #+#    #+#             */
/*   Updated: 2023/10/26 17:48:17 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *s;
	char *d;
	char *buffer;
	size_t i;
	
	s = (char *)src;
	d = (char *)dst;
	buffer = ft_strdup(s);
	i = 0;
	while(s && i < len)
	{
		buffer[i] = s[i];
		i++;
	}
	i = 0;
	while(buffer && i < len)
	{
		d[i] = buffer[i];
		i++;
	}
	return (d);
}
